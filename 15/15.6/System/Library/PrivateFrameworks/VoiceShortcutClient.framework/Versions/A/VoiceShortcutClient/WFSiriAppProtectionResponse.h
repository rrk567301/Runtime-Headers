@interface WFSiriAppProtectionResponse : WFSiriActionResponse

@property (readonly, nonatomic) char didUnlock;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDidUnlock:(char)a0 andError:(id)a1;

@end
