@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {
    AVOutputContextManagerInternal *_ivars;
}

+ (id)outputContextManagerForAllOutputContexts;

- (void)outputContextManagerImpl:(id)a0 observedFailureToConnectToOutputDevice:(id)a1 reason:(id)a2 didFailToConnectToOutputDeviceDictionary:(id)a3;
- (id)initWithOutputContextManagerImpl:(id)a0;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:(id)a0;
- (void)dealloc;

@end
