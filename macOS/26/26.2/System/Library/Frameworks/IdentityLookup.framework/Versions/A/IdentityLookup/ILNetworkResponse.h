@class NSData, NSHTTPURLResponse;

@interface ILNetworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSHTTPURLResponse *urlResponse;
@property (copy, nonatomic) NSData *data;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURLResponse:(id)a0 data:(id)a1;

@end
