@protocol NSObject;

@interface EFPair : NSObject <NSCopying>

@property (readonly, nonatomic) id<NSObject> first;
@property (readonly, nonatomic) id<NSObject> second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (BOOL)isEqualToPair:(id)a0;

@end
