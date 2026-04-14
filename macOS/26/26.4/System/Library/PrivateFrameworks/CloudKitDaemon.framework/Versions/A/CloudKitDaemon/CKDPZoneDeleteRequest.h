@class CKDPDate, CKDPZoneEtagValidationInformation, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char zoneSaveSemantics : 1; unsigned char userPurge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasUserPurge;
@property (nonatomic) BOOL userPurge;
@property (readonly, nonatomic) BOOL hasLastMissingManateeIdentityErrorDate;
@property (retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate;
@property (readonly, nonatomic) BOOL hasValidationEtag;
@property (retain, nonatomic) CKDPZoneEtagValidationInformation *validationEtag;
@property (nonatomic) BOOL hasZoneSaveSemantics;
@property (nonatomic) int zoneSaveSemantics;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (int)StringAsZoneSaveSemantics:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)zoneSaveSemanticsAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;

@end
