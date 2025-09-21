@class NSString;

@interface HMEProtoEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cachePolicy : 1; unsigned char combinePolicy : 1; unsigned char qos : 1; } _has;
}

@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasCachePolicy;
@property (nonatomic) unsigned int cachePolicy;
@property (nonatomic) char hasCombinePolicy;
@property (nonatomic) unsigned int combinePolicy;
@property (nonatomic) char hasQos;
@property (nonatomic) unsigned int qos;

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

@end
