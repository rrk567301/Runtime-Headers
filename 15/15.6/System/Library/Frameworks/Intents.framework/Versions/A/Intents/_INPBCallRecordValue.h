@class _INPBContactValue, _INPBDateTime, NSString, _INPBCallMetrics, _INPBInteger, NSArray;

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying> {
    struct { unsigned char callCapability : 1; unsigned char callType : 1; unsigned char isCallerIdBlocked : 1; unsigned char preferredCallProvider : 1; unsigned char unseen : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int callCapability;
@property (nonatomic) char hasCallCapability;
@property (retain, nonatomic) _INPBCallMetrics *callMetrics;
@property (readonly, nonatomic) char hasCallMetrics;
@property (nonatomic) int callType;
@property (nonatomic) char hasCallType;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (readonly, nonatomic) char hasCaller;
@property (retain, nonatomic) _INPBDateTime *dateCreated;
@property (readonly, nonatomic) char hasDateCreated;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (nonatomic) char isCallerIdBlocked;
@property (nonatomic) char hasIsCallerIdBlocked;
@property (retain, nonatomic) _INPBInteger *numberOfCalls;
@property (readonly, nonatomic) char hasNumberOfCalls;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) char hasPreferredCallProvider;
@property (copy, nonatomic) NSString *providerBundleId;
@property (readonly, nonatomic) char hasProviderBundleId;
@property (copy, nonatomic) NSString *providerId;
@property (readonly, nonatomic) char hasProviderId;
@property (nonatomic) char unseen;
@property (nonatomic) char hasUnseen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addParticipants:(id)a0;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;
- (int)StringAsCallType:(id)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (int)StringAsCallCapability:(id)a0;
- (id)callCapabilityAsString:(int)a0;
- (id)callTypeAsString:(int)a0;
- (id)preferredCallProviderAsString:(int)a0;

@end
