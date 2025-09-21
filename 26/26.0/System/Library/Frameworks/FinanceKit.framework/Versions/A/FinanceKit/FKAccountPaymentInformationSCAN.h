@class NSString;

@interface FKAccountPaymentInformationSCAN : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *accountNumber;
@property (readonly, copy, nonatomic) NSString *sortCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountNumber:(id)a0 sortCode:(id)a1;

@end
