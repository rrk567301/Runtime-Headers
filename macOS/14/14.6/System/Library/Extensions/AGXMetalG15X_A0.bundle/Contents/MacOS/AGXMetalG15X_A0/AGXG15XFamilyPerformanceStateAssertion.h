@class NSString, AGXG15XFamilyDevice;

@interface AGXG15XFamilyPerformanceStateAssertion : NSObject <MTLPerformanceStateAssertion> {
    int _requestedLevel;
    AGXG15XFamilyDevice *_device;
}

@property (readonly) long long requestedPerformanceState;
@property (readonly) BOOL wasPerformanceStateAssertionMaintained;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0 level:(int)a1;

@end
