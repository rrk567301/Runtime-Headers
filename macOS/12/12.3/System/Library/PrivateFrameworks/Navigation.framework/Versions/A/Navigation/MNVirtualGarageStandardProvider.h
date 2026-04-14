@class NSString;
@protocol MNVirtualGarageProviderDelegate;

@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider> {
    BOOL _isStarted;
}

@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;

@end
