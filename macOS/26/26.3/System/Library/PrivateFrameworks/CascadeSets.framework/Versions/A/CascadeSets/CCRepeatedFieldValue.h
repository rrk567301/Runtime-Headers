@class NSMutableArray;

@interface CCRepeatedFieldValue : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *values;

+ (id)new;
+ (id)_new;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMutableArray:(id)a0;

@end
