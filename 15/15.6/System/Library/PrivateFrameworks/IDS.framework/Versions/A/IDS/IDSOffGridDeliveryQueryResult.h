@class IDSURI, NSString;

@interface IDSOffGridDeliveryQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IDSURI *uri;
@property (retain, nonatomic) NSString *shortHandle;
@property (nonatomic) long long status;
@property (nonatomic) char hasUsableSenderKey;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
