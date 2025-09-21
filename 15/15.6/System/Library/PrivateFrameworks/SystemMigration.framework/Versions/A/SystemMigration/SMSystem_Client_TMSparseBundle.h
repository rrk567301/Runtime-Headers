@interface SMSystem_Client_TMSparseBundle : SMSystem_Client

@property (readonly) char encryptedBundle;
@property (readonly) long long foundSystems;
@property (readonly) long long totalSystems;

+ (id)guiInterestedKeys;
+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingDisplayState;

- (id)displayName;
- (id)displayState;
- (char)isMounted;
- (id)availableActionLabel;
- (long long)defaultUIRank;
- (void)pressedActionButton:(id)a0;

@end
