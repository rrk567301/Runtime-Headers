@interface WFSiriLocationAuthorizationResponse : WFSiriActionResponse

@property (readonly, nonatomic) char didAuthorize;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithDidAuthorize:(char)a0;

@end
