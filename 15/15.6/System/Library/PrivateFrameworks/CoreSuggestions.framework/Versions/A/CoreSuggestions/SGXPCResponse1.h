@protocol NSSecureCoding;

@interface SGXPCResponse1 : SGXPCResponse

@property (readonly, nonatomic) id<NSSecureCoding> response1;

+ (char)supportsSecureCoding;
+ (id)responseWithError:(id)a0;
+ (id)responseWith:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setResponse1:(id)a0;

@end
