@class PBUnknownFields;

@interface GEOPrivacyMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _isManagedAccount;
    char _isMismatchedStorefrontDeviceRegion;
    char _isSharedIpadForEducation;
    char _isUnderageAccount;
    struct { unsigned char has_isManagedAccount : 1; unsigned char has_isMismatchedStorefrontDeviceRegion : 1; unsigned char has_isSharedIpadForEducation : 1; unsigned char has_isUnderageAccount : 1; } _flags;
}

@property (nonatomic) char hasIsUnderageAccount;
@property (nonatomic) char isUnderageAccount;
@property (nonatomic) char hasIsManagedAccount;
@property (nonatomic) char isManagedAccount;
@property (nonatomic) char hasIsMismatchedStorefrontDeviceRegion;
@property (nonatomic) char isMismatchedStorefrontDeviceRegion;
@property (nonatomic) char hasIsSharedIpadForEducation;
@property (nonatomic) char isSharedIpadForEducation;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
