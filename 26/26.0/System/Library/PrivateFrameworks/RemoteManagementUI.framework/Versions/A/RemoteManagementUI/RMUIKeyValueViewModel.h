@class NSString, NSArray, NSDictionary, RMModelDeclarationBase;

@interface RMUIKeyValueViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property short symbol;
@property (retain) NSString *title;
@property (retain) RMModelDeclarationBase *declaration;
@property (retain) NSString *declarationIdentifier;
@property (retain) NSString *declarationServerToken;
@property (retain) NSString *declarationType;
@property (retain) NSArray *detailViewModels;
@property (retain) NSDictionary *hiddenDetails;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)clearModel;

@end
