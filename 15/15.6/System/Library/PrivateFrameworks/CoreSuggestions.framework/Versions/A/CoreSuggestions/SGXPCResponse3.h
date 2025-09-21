@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2

@property (readonly, nonatomic) id<NSSecureCoding> response3;

+ (char)supportsSecureCoding;
+ (id)responseWithError:(id)a0;
+ (id)responseWith:(id)a0 also:(id)a1 also:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)response1;
- (id)response2;

@end
