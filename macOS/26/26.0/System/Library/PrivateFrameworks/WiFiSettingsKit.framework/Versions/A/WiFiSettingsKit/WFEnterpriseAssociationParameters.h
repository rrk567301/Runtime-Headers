@class NSString, NSArray, NSDictionary;

@interface WFEnterpriseAssociationParameters : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (retain, nonatomic) NSArray *certificateChain;
@property (retain, nonatomic) NSDictionary *eapTypes;

- (id)description;
- (void).cxx_destruct;

@end
