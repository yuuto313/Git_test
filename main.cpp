#include <Novice.h>

const char kWindowTitle[] = "LC1B_08_オザワ_ユウト_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		Novice::ScreenPrintf(0,0,"Hello");
		Novice::ScreenPrintf(0, 15, "LC1B_05_オザワ_ユウト");
		Novice::ScreenPrintf(0, 30, "2023/10/11");
		Novice::ScreenPrintf(0, 45, "Playerの作成");
		Novice::ScreenPrintf(0, 60, "マージしてください");
		Novice::ScreenPrintf(0, 60, "マージお願いします！");
		Novice::ScreenPrintf(0, 75, "プルリクエストの作成");
		Novice::ScreenPrintf(0, 90,"確認課題");

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
