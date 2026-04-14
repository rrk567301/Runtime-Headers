@class NSSet;

@interface SMABundleAccessOptions : NSObject

@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSSet *pathsToPurgeOnGraftFailureInEarlyBootTask;

- (void).cxx_destruct;
- (id)init;

@end
