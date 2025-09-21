@interface WFSiriPunchOutResponse : WFSiriActionResponse

@property (readonly, nonatomic) char shouldPunchOut;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShouldPunchOut:(char)a0;

@end
