inline struct client_dllOffsets {
	DWORD dwCSGOInput;
	DWORD dwEntityList;
	DWORD dwGameEntitySystem;
	DWORD dwGameEntitySystem_highestEntityIndex;
	DWORD dwGameRules;
	DWORD dwGlobalVars;
	DWORD dwGlowManager;
	DWORD dwLocalPlayerController;
	DWORD dwLocalPlayerPawn;
	DWORD dwPlantedC4;
	DWORD dwPrediction;
	DWORD dwSensitivity;
	DWORD dwSensitivity_sensitivity;
	DWORD dwViewAngles;
	DWORD dwViewMatrix;
	DWORD dwViewRender;
	DWORD dwWeaponC4;
} client_dll;

inline struct engine2_dllOffsets {
	DWORD dwBuildNumber;
	DWORD dwNetworkGameClient;
	DWORD dwNetworkGameClient_clientTickCount;
	DWORD dwNetworkGameClient_deltaTick;
	DWORD dwNetworkGameClient_isBackgroundMap;
	DWORD dwNetworkGameClient_localPlayer;
	DWORD dwNetworkGameClient_maxClients;
	DWORD dwNetworkGameClient_serverTickCount;
	DWORD dwNetworkGameClient_signOnState;
	DWORD dwWindowHeight;
	DWORD dwWindowWidth;
} engine2_dll;

inline struct inputsystem_dllOffsets {
	DWORD dwInputSystem;
} inputsystem_dll;

inline struct matchmaking_dllOffsets {
	DWORD dwGameTypes;
} matchmaking_dll;

inline struct soundsystem_dllOffsets {
	DWORD dwSoundSystem;
	DWORD dwSoundSystem_engineViewData;
} soundsystem_dll;

