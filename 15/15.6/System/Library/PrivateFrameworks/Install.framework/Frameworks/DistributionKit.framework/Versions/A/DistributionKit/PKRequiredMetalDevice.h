@class NSString, NSArray, NSNumber;
@protocol MTLDevice;

@interface PKRequiredMetalDevice : NSObject

@property (retain) id<MTLDevice> currentDevice;
@property (readonly, retain) NSString *deviceName;
@property (readonly, retain) NSArray *supportedFeatureSets;
@property (readonly) char isLowPowerDevice;
@property (readonly) char isHeadless;
@property (readonly) char isRemovable;
@property (readonly) NSNumber *argumentBuffersTier;
@property (readonly) char rasterOrderGroupsSupported;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDevice:(id)a0;

@end
