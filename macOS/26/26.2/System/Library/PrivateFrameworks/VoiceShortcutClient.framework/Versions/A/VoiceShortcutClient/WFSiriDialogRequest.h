@class WFDialogRequest;

@interface WFSiriDialogRequest : WFSiriActionRequest

@property (readonly, nonatomic) WFDialogRequest *dialogRequest;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDialogRequest:(id)a0;

@end
