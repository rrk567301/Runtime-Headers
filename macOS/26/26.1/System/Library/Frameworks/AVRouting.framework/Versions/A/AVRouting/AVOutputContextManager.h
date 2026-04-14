@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;

- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)a0;
- (id)initWithOutputContextManagerImpl:(id)a0;
- (void)dealloc;
- (void)outputContextManagerImpl:(id)a0 observedFailureToConnectToOutputDevice:(id)a1 reason:(id)a2 didFailToConnectToOutputDeviceDictionary:(id)a3;

@end
