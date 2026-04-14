@class NSString;

@interface CLPPrivacySanitization : PBCodable <NSCopying> {
    struct { unsigned char tripSegmentType : 1; } _has;
}

@property (nonatomic) BOOL hasTripSegmentType;
@property (nonatomic) int tripSegmentType;
@property (retain, nonatomic) NSString *version;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsTripSegmentType:(id)a0;
- (id)tripSegmentTypeAsString:(int)a0;

@end
