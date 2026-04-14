@interface HDMHomeManagerDataSyncProxy : NSObject <HMHomeManagerDelegatePrivate, HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdateDataSyncState:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
