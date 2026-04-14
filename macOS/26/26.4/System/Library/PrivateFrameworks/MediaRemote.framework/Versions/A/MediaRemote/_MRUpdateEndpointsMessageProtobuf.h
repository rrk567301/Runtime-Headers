@class NSMutableArray;

@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endpointFeatures : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *endpoints;
@property (nonatomic) BOOL hasEndpointFeatures;
@property (nonatomic) int endpointFeatures;

+ (Class)endpointsType;

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
- (int)StringAsEndpointFeatures:(id)a0;
- (void)addEndpoints:(id)a0;
- (void)clearEndpoints;
- (id)endpointFeaturesAsString:(int)a0;
- (id)endpointsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointsCount;

@end
