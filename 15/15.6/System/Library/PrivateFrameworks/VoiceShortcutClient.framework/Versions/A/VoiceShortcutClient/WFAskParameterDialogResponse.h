@protocol WFPropertyListObject;

@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<WFPropertyListObject> serializedParameterState;

+ (char)supportsBSXPCSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithSerializedParameterState:(id)a0 cancelled:(char)a1;

@end
