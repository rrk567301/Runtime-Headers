@class NSString;

@interface WFToolKitParameterDialogRequest : WFDialogRequest

@property (copy, nonatomic) NSString *parameterKey;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterKey:(id)a0 attribution:(id)a1 prompt:(id)a2;

@end
