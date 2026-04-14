@class NSMutableArray;

@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endpointFeatures : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *endpoints;
@property (nonatomic) BOOL hasEndpointFeatures;
@property (nonatomic) int endpointFeatures;

+ (Class)endpointsType;

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
- (void)clearEndpoints;
- (void)addEndpoints:(id)a0;
- (unsigned long long)endpointsCount;
- (id)endpointsAtIndex:(unsigned long long)a0;
- (id)endpointFeaturesAsString:(int)a0;
- (int)StringAsEndpointFeatures:(id)a0;

@end
