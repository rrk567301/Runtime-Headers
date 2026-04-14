@protocol HMDCarPlayDataSource;

@interface HMDClientConnectionDataSource : NSObject <HMDClientConnectionDataSource>

@property (readonly) id<HMDCarPlayDataSource> carPlayDataSource;
@property (readonly) BOOL supportsDeviceLock;
@property (readonly) BOOL isDeviceLocked;

- (void).cxx_destruct;
- (id)init;

@end
