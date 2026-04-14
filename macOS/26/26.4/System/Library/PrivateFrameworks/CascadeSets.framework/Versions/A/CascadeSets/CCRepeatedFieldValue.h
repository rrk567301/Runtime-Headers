@class NSMutableArray;

@interface CCRepeatedFieldValue : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *values;

+ (id)new;
+ (id)_new;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMutableArray:(id)a0;

@end
