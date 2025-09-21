@class NSString;

@interface COTimerDismissRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimerIdentifier:(id)a0;

@end
