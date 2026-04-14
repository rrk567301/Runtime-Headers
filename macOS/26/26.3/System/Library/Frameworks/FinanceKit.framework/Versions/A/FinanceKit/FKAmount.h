@class NSDecimalNumber, NSString;

@interface FKAmount : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDecimalNumber *decimal;
@property (readonly, copy, nonatomic) NSString *currency;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDecimalNumber:(id)a0 currency:(id)a1;

@end
