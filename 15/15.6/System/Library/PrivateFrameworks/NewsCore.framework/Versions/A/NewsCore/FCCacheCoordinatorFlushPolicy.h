@interface FCCacheCoordinatorFlushPolicy : NSObject

@property (readonly, nonatomic) char alwaysFlushKeysWithZeroInterest;
@property (readonly, nonatomic) unsigned long long highWaterMark;
@property (readonly, nonatomic) unsigned long long lowWaterMark;

- (id)initWithLowWaterMark:(unsigned long long)a0 highWaterMark:(unsigned long long)a1 alwaysFlushKeysWithZeroInterest:(char)a2;

@end
