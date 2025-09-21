@class NSString;

@interface PMLLabelLimitRowId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) long long rowId;

+ (id)labelLimitRowIdWithLabel:(id)a0 limit:(long long)a1 rowId:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 limit:(long long)a1 rowId:(long long)a2;
- (BOOL)isEqualToLabelLimitRowId:(id)a0;

@end
