@class NSData;

@interface PKPeerPaymentMessageLocalProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSData *analyticsSessionToken;

- (id)initWithSource:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
