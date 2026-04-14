@class NSString;

@interface CLPPrivacySanitization : PBCodable <NSCopying> {
    struct { unsigned char tripSegmentType : 1; } _has;
}

@property (nonatomic) BOOL hasTripSegmentType;
@property (nonatomic) int tripSegmentType;
@property (retain, nonatomic) NSString *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsTripSegmentType:(id)a0;
- (id)tripSegmentTypeAsString:(int)a0;

@end
