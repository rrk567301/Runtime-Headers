@class NSString, HDCodableNotificationInstructionCriteria;

@interface HDCodableNotificationInstructionMessage : PBCodable <NSCopying> {
    struct { unsigned char action : 1; unsigned char creationDateTimeInterval : 1; unsigned char currentCompatibilityVersion : 1; unsigned char expirationDateTimeInterval : 1; unsigned char minimumCompatibleVersion : 1; } _has;
}

@property (nonatomic) char hasCurrentCompatibilityVersion;
@property (nonatomic) long long currentCompatibilityVersion;
@property (nonatomic) char hasMinimumCompatibleVersion;
@property (nonatomic) long long minimumCompatibleVersion;
@property (nonatomic) char hasCreationDateTimeInterval;
@property (nonatomic) double creationDateTimeInterval;
@property (readonly, nonatomic) char hasSendingDeviceInfo;
@property (retain, nonatomic) NSString *sendingDeviceInfo;
@property (nonatomic) char hasAction;
@property (nonatomic) long long action;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) char hasCategoryIdentifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) char hasExpirationDateTimeInterval;
@property (nonatomic) double expirationDateTimeInterval;
@property (readonly, nonatomic) char hasCriteria;
@property (retain, nonatomic) HDCodableNotificationInstructionCriteria *criteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
