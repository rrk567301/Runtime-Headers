@interface CKDURLSessionPool : NSObject {
    int _backgroundSessionConnectionPoolLimit;
}

@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (id)init;
- (void)_updateBackgroundSessionConnectionPoolLimit;

@end
