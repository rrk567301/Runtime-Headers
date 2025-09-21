@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {
    struct { unsigned char numRequested : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) BOOL hasNumRequested;
@property (nonatomic) long long numRequested;

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

@end
