@class IDSURI, NSString;

@interface IDSOffGridDeliveryQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSURI *uri;
@property (retain, nonatomic) NSString *shortHandle;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasUsableSenderKey;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
