@class NSString, AGXG15GFamilyDevice;

@interface AGXG15GFamilyPerformanceStateAssertion : NSObject <MTLPerformanceStateAssertion> {
    int _requestedLevel;
    AGXG15GFamilyDevice *_device;
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
