@interface NUPriority : NSObject

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) double order;
@property (readonly, nonatomic) char isHigh;
@property (readonly, nonatomic) char isLow;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithLevel:(long long)a0;
- (id)initWithLevel:(long long)a0 order:(double)a1;
- (char)isEqualToPriority:(id)a0;

@end
