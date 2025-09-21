@class GEOStyleAttributes, NSString, PBUnknownFields;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char cartoID : 1; unsigned char defaultTransitType : 1; unsigned char iconAttributeKey : 1; unsigned char iconAttributeValue : 1; unsigned char iconType : 1; } _has;
}

@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) char hasCartoID;
@property (nonatomic) unsigned int cartoID;
@property (nonatomic) char hasDefaultTransitType;
@property (nonatomic) unsigned int defaultTransitType;
@property (nonatomic) char hasIconAttributeKey;
@property (nonatomic) unsigned int iconAttributeKey;
@property (nonatomic) char hasIconAttributeValue;
@property (nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithIcon:(id)a0;
- (int)StringAsIconType:(id)a0;
- (id)iconTypeAsString:(int)a0;

@end
