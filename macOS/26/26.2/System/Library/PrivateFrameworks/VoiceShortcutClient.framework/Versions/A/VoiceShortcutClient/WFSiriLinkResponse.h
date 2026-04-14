@class LNActionOutput;

@interface WFSiriLinkResponse : WFSiriActionResponse

@property (readonly, nonatomic) LNActionOutput *actionOutput;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutput:(id)a0 andError:(id)a1;

@end
