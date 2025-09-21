@class NSMutableArray;

@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endpointFeatures : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *endpoints;
@property (nonatomic) char hasEndpointFeatures;
@property (nonatomic) int endpointFeatures;

+ (Class)endpointsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEndpointFeatures:(id)a0;
- (void)addEndpoints:(id)a0;
- (void)clearEndpoints;
- (id)endpointFeaturesAsString:(int)a0;
- (id)endpointsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointsCount;

@end
