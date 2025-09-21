@class NSString;

@interface BMPBSemanticLocationEvent : PBCodable <NSCopying> {
    struct { unsigned char placeType : 1; unsigned char userSpecificPlaceType : 1; unsigned char starting : 1; } _has;
}

@property (nonatomic) char hasStarting;
@property (nonatomic) char starting;
@property (nonatomic) char hasUserSpecificPlaceType;
@property (nonatomic) int userSpecificPlaceType;
@property (nonatomic) char hasPlaceType;
@property (nonatomic) int placeType;
@property (readonly, nonatomic) char hasLoiIdentifier;
@property (retain, nonatomic) NSString *loiIdentifier;

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
- (int)StringAsPlaceType:(id)a0;
- (id)placeTypeAsString:(int)a0;
- (int)StringAsUserSpecificPlaceType:(id)a0;
- (id)userSpecificPlaceTypeAsString:(int)a0;

@end
