@class IDSURI, NSDictionary;

@interface IDSOffGridServerMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *senderURI;
@property (readonly, nonatomic) IDSURI *recipientURI;
@property (readonly, nonatomic) NSDictionary *topLevelFields;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasOnlyAllowedClasses:(id)a0;
- (id)initWithSenderURI:(id)a0 recipientURI:(id)a1 topLevelFields:(id)a2;

@end
