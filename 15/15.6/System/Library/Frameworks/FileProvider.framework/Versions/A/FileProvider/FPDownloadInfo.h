@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char recursively;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
