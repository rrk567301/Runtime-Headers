@class NSString, NSMutableArray;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSMutableArray *annotations;

+ (Class)annotationType;

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
- (void)addAnnotation:(id)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;
- (id)annotationAtIndex:(unsigned long long)a0;

@end
