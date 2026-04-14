@interface HDMHomeManagerDataSyncProxy : NSObject <HMHomeManagerDelegatePrivate, HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

- (void)homeManagerDidUpdateDataSyncState:(id)a0;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;

@end
