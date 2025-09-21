@class NSString, PBUnknownFields;

@interface MSPPinnedPlaceContactStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) BOOL hasLabeledValueIdentifier;
@property (retain, nonatomic) NSString *labeledValueIdentifier;
@property (readonly, nonatomic) BOOL hasHandleValue;
@property (retain, nonatomic) NSString *handleValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
