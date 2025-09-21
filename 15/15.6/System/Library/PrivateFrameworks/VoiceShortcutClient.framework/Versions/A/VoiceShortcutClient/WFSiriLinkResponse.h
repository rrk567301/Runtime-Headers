@class LNActionOutput;

@interface WFSiriLinkResponse : WFSiriActionResponse

@property (readonly, nonatomic) LNActionOutput *actionOutput;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOutput:(id)a0 andError:(id)a1;

@end
