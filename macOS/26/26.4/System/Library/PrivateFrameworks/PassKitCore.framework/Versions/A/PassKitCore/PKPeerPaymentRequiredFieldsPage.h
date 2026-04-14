@class NSArray, NSString, NSDictionary;

@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (retain, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSDictionary *footerFields;
@property (copy, nonatomic) NSArray *sectionIdentifiers;
@property (copy, nonatomic) NSString *requestToken;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL requiresExplicitPrimaryAction;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1;

@end
