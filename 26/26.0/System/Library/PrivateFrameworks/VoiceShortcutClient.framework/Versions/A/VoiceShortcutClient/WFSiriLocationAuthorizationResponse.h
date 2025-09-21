@interface WFSiriLocationAuthorizationResponse : WFSiriActionResponse

@property (readonly, nonatomic) BOOL didAuthorize;

+ (BOOL)supportsSecureCoding;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDidAuthorize:(BOOL)a0;

@end
