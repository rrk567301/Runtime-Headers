@class NSString, IDSURI;

@interface IDSOffGridDeliveryOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long sendMode;
@property (nonatomic) BOOL encryptPayload;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) IDSURI *senderURI;
@property (nonatomic) long long command;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSString *originalUUID;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultOptionsForTransportType:(long long)a0;

@end
