@class NSDictionary, NSData, NSDate;

@interface SKInvitationPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *payloadDictionary;
@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) NSDate *dateCreated;

+ (id)logger;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 dateCreated:(id)a1;
- (id)initWithData:(id)a0 dateCreated:(id)a1;

@end
