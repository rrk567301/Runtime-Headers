@class NSString, NSMutableArray;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSMutableArray *annotations;

+ (Class)annotationType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addAnnotation:(id)a0;
- (void)clearAnnotations;
- (unsigned long long)annotationsCount;
- (id)annotationAtIndex:(unsigned long long)a0;

@end
