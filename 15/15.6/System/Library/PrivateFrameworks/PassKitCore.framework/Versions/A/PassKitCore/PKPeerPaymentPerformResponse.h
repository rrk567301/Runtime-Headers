@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse

@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 deviceScoreIdentifier:(id)a1;

@end
