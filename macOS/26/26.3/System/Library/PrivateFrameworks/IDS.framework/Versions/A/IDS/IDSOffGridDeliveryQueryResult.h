@class IDSURI, NSString;

@interface IDSOffGridDeliveryQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSURI *uri;
@property (retain, nonatomic) NSString *shortHandle;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasUsableSenderKey;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
