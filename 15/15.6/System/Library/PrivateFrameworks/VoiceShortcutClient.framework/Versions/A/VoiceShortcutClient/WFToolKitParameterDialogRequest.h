@class NSString;

@interface WFToolKitParameterDialogRequest : WFDialogRequest

@property (copy, nonatomic) NSString *parameterKey;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterKey:(id)a0 attribution:(id)a1 prompt:(id)a2;

@end
