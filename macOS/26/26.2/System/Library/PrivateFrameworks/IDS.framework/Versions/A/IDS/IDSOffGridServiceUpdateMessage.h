@class IDSURI, NSDate;

@interface IDSOffGridServiceUpdateMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) IDSURI *senderURI;
@property (readonly, nonatomic) IDSURI *recipientURI;
@property (readonly, nonatomic) long long preferredServiceType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryMessage:(id)a0;
- (id)initWithPreferredServiceType:(long long)a0 senderURI:(id)a1 recipientURI:(id)a2;

@end
