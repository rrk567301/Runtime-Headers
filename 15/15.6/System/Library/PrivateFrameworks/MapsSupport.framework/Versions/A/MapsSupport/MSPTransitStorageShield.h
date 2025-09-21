@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char shieldType : 1; } _has;
}

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) char hasShieldType;
@property (nonatomic) long long shieldType;
@property (readonly, nonatomic) char hasShieldColorString;
@property (retain, nonatomic) NSString *shieldColorString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithShield:(id)a0;

@end
