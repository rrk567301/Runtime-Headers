@class NSArray, NSMutableArray, PBUnknownFields;
@protocol GEOSurchargeType;

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_requestOptions;
    int _optionUsed;
    struct { unsigned char has_optionUsed : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *surchargeTypes;
@property (readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property (readonly, nonatomic) id<GEOSurchargeType> selectedSurchargeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
