@class NSString;

@interface CKVSearchField : NSObject <NSCopying>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 text:(id)a1;
- (BOOL)isEqualToField:(id)a0;

@end
