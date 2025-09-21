@class NSString, GEOFormattedString, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_name;
    int _enumValue;
    struct { unsigned char has_enumValue : 1; } _flags;
}

@property (readonly, nonatomic) int value;
@property (readonly, nonatomic) id<GEOServerFormattedString> formattedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasEnumValue;
@property (nonatomic) int enumValue;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) GEOFormattedString *name;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
