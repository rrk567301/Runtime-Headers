@class NSString;

@interface PKPaymentSetupPartner : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
