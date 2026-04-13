@class NSError;

@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fileResponseCode;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileResponseCode:(unsigned long long)a0 error:(id)a1;

@end
