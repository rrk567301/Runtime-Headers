@class NSError;

@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fileResponseCode;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithFileResponseCode:(unsigned long long)a0 error:(id)a1;

@end
