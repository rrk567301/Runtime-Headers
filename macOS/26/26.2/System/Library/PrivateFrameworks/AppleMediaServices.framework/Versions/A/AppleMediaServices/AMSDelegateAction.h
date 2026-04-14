@class NSString, NSDictionary;

@interface AMSDelegateAction : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *parameters;

- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)actionPayload;
- (id)initWithDialogAction:(id)a0;

@end
