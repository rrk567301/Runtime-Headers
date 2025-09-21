@class NSString;

@interface _TtCC13HomeDataModel18WidgetHomeDataSync24HomeManagerDataSyncProxy : NSObject <HMHomeManagerDelegate, HMHomeManagerDelegatePrivate> {
    void /* unknown type, empty encoding */ continuation;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void)homeManagerDidUpdateDataSyncState:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
