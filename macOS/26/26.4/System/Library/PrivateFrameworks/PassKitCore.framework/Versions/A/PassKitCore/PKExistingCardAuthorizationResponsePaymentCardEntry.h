@class NSString;

@interface PKExistingCardAuthorizationResponsePaymentCardEntry : NSObject

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *redemptionToken;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 redemptionToken:(id)a2;

@end
