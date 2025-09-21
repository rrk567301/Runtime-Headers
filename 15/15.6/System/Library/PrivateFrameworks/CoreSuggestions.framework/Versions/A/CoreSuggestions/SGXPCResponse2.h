@protocol NSSecureCoding;

@interface SGXPCResponse2 : SGXPCResponse1

@property (readonly, nonatomic) id<NSSecureCoding> response2;

+ (char)supportsSecureCoding;
+ (id)responseWithError:(id)a0;
+ (id)responseWith:(id)a0 also:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)response1;
- (void)setResponse2:(id)a0;

@end
