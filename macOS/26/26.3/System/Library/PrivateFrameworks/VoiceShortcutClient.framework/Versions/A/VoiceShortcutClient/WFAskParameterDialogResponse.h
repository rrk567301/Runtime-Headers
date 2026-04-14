@protocol WFPropertyListObject;

@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<WFPropertyListObject> serializedParameterState;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedParameterState:(id)a0 cancelled:(BOOL)a1;

@end
