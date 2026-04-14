@class NSMutableArray;

@interface CLPLOGENTRYVISIONLSLHeadingEstimation : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char statusDEPRECATED : 1; } _has;
}

@property (nonatomic) BOOL hasStatusDEPRECATED;
@property (nonatomic) int statusDEPRECATED;
@property (retain, nonatomic) NSMutableArray *headings;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (Class)headingsType;

- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (id)statusAsString:(int)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsStatusDEPRECATED:(id)a0;
- (void)addHeadings:(id)a0;
- (void)clearHeadings;
- (id)headingsAtIndex:(unsigned long long)a0;
- (unsigned long long)headingsCount;
- (id)statusDEPRECATEDAsString:(int)a0;

@end
