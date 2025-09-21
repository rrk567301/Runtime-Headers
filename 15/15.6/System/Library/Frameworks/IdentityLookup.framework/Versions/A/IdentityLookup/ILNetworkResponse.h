@class NSData, NSHTTPURLResponse;

@interface ILNetworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSHTTPURLResponse *urlResponse;
@property (copy, nonatomic) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLResponse:(id)a0 data:(id)a1;

@end
