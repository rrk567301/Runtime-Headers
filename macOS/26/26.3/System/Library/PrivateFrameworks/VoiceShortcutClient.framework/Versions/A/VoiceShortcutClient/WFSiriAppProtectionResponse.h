@interface WFSiriAppProtectionResponse : WFSiriActionResponse

@property (readonly, nonatomic) BOOL didUnlock;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDidUnlock:(BOOL)a0 andError:(id)a1;

@end
