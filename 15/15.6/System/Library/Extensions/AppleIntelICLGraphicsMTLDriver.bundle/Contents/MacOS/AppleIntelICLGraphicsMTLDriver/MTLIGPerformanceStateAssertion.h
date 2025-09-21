@class NSString, MTLIGAccelDevice;

@interface MTLIGPerformanceStateAssertion : NSObject <MTLPerformanceStateAssertion> {
    long long requestedState;
    MTLIGAccelDevice *mtlDevice;
}

@property (readonly) long long requestedPerformanceState;
@property (readonly) char wasPerformanceStateAssertionMaintained;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithState:(long long)a0 device:(id)a1;

@end
