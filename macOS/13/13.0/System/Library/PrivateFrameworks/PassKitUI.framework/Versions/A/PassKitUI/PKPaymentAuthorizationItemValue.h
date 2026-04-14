@class NSString;

@interface PKPaymentAuthorizationItemValue : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long mode;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
