@class NSString;

@interface WFPerformQueryDialogRequest : WFDialogRequest

@property (readonly, copy, nonatomic) NSString *parameterKey;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParameterKey:(id)a0 attribution:(id)a1 prompt:(id)a2;

@end
