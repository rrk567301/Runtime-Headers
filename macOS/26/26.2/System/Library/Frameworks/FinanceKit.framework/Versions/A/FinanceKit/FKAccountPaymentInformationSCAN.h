@class NSString;

@interface FKAccountPaymentInformationSCAN : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *accountNumber;
@property (readonly, copy, nonatomic) NSString *sortCode;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAccountNumber:(id)a0 sortCode:(id)a1;

@end
