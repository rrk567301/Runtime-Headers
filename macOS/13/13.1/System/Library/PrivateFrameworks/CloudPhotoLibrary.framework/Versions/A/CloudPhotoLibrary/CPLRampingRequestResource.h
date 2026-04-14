@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {
    struct { unsigned char numRequested : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) BOOL hasNumRequested;
@property (nonatomic) long long numRequested;

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

@end
