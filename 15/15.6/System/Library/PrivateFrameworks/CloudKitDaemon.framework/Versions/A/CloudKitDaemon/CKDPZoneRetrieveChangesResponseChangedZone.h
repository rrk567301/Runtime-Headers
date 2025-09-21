@class CKDPAnonymousZoneInfo, CKDPZoneCapabilities, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; unsigned char deleteType : 1; unsigned char isAnonymous : 1; } _has;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) char hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic) char hasDeleteType;
@property (nonatomic) int deleteType;
@property (readonly, nonatomic) char hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) char hasIsAnonymous;
@property (nonatomic) char isAnonymous;
@property (readonly, nonatomic) char hasAnonymousZoneInfo;
@property (retain, nonatomic) CKDPAnonymousZoneInfo *anonymousZoneInfo;
@property (readonly, nonatomic) char hasZoneParentIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneParentIdentifier;

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
- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (int)StringAsDeleteType:(id)a0;
- (id)deleteTypeAsString:(int)a0;

@end
