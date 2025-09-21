@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {
    struct { unsigned char numRequested : 1; } _has;
}

@property (readonly, nonatomic) char hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) char hasNumRequested;
@property (nonatomic) long long numRequested;

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
