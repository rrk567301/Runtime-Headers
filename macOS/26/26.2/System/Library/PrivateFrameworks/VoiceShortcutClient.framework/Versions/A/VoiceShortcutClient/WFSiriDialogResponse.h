@class WFDialogResponse;

@interface WFSiriDialogResponse : WFSiriActionResponse

@property (readonly, nonatomic) WFDialogResponse *dialogResponse;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDialogResponse:(id)a0;

@end
