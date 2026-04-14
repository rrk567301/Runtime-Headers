@class NSString;

@interface PKPaymentPassBackgroundDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *pushTopic;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
