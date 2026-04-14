@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject *first;
@property (readonly, nonatomic) NSObject *second;

+ (id)tupleWithFirst:(id)a0 second:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)init;
- (BOOL)isEqualToTuple2:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
