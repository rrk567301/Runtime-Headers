@class NSMutableArray;

@interface ADOdmlResponseV2 : PBCodable <NSCopying> {
    struct { unsigned char odmlEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasOdmlEnabled;
@property (nonatomic) BOOL odmlEnabled;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

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
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;

@end
