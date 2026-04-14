@class NSString, NSDictionary, NSData, _TtC5AskTo10ATQuestion, _TtC9AskToCore10ATResponse, NSArray;

@interface AskToCore.ATPayload : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ requesterDSID;
    void /* function */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ clientAdamIdentifier;
    void /* function */ clientDisplayName;
    void /* function */ clientIconData;
    void /* function */ allResponses;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) short currentVersion;

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) short version;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *clientDisplayName;
@property (nonatomic, readonly) NSData *clientIconData;
@property (nonatomic, readonly) short rawRecipientGroup;
@property (nonatomic, readonly) _TtC5AskTo10ATQuestion *question;
@property (nonatomic, readonly) _TtC9AskToCore10ATResponse *response;
@property (nonatomic, readonly) NSArray *allResponses;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)initWithCopying:(id)a0;
- (id)initWithOriginalPayload:(id)a0 newResponse:(id)a1;

@end
