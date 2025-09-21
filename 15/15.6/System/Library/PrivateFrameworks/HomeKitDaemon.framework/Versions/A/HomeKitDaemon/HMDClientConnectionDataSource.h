@protocol HMDCarPlayDataSource;

@interface HMDClientConnectionDataSource : NSObject <HMDClientConnectionDataSource>

@property (readonly) id<HMDCarPlayDataSource> carPlayDataSource;
@property (readonly) char supportsDeviceLock;
@property (readonly) char isDeviceLocked;

- (id)init;
- (void).cxx_destruct;

@end
