@interface CLPPoiTriggerEvent : PBCodable <NSCopying> {
    struct { unsigned char triggerTimestamp : 1; unsigned char providerIdentifier : 1; unsigned char triggerSubType : 1; unsigned char triggerType : 1; } _has;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasProviderIdentifier;
@property (nonatomic) int providerIdentifier;
@property (nonatomic) char hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) char hasTriggerTimestamp;
@property (nonatomic) double triggerTimestamp;
@property (nonatomic) char hasTriggerSubType;
@property (nonatomic) int triggerSubType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTriggerType:(id)a0;
- (id)triggerTypeAsString:(int)a0;

@end
