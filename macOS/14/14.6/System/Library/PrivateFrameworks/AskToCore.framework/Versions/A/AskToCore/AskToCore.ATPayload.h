@class NSString, NSArray, NSDictionary;

@interface AskToCore.ATPayload : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ clientAdamIdentifier;
    void /* unknown type, empty encoding */ messageGUID;
    void /* unknown type, empty encoding */ allResponses;
}

@property (class, nonatomic, readonly) short currentVersion;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ receivingRecipientGroup;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ question;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ response;
@property (nonatomic, readonly) NSArray *allResponses;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)initWithClientBundleIdentifier:(id)a0 receivingRecipientGroup:(short)a1 question:(id)a2;
- (id)initWithCopying:(id)a0;
- (id)initWithOriginalPayload:(id)a0 newResponse:(id)a1;

@end
