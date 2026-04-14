@interface HDMHomeManagerDataSyncProxy : NSObject <HMHomeManagerDelegatePrivate, HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateDataSyncState:(id)a0;

@end
