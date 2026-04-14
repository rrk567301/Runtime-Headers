@class NSMutableArray;

@interface ADOdmlResponseV2 : PBCodable <NSCopying> {
    struct { unsigned char odmlEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasOdmlEnabled;
@property (nonatomic) BOOL odmlEnabled;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (void)addFeatures:(id)a0;

@end
