@class NSMutableArray;

@interface CCRepeatedFieldValue : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *values;

+ (id)new;
+ (id)_new;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMutableArray:(id)a0;

@end
