@interface SMSystem_Client_TMSparseBundle : SMSystem_Client

@property (readonly) BOOL encryptedBundle;
@property (readonly) long long foundSystems;
@property (readonly) long long totalSystems;

+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)guiInterestedKeys;

- (id)displayName;
- (BOOL)isMounted;
- (id)displayState;
- (long long)defaultUIRank;
- (id)availableActionLabel;
- (void)pressedActionButton:(id)a0;

@end
