@interface _DKSyncedFeatures : NSObject {
    char _isDigitalHealthDisabledInitialized;
    char _isDigitalHealthDisabledPreviousResult;
    char _isSingleDevice;
    long long _screenTimeSyncState;
}

- (id)description;
- (id)init;

@end
