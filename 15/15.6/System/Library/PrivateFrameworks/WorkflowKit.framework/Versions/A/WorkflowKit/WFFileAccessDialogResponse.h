@class NSError;

@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fileResponseCode;
@property (readonly, nonatomic) NSError *error;

+ (char)supportsBSXPCSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithFileResponseCode:(unsigned long long)a0 error:(id)a1;

@end
