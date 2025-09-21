@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying> {
    struct { unsigned char retryAfterMillis : 1; unsigned char allowed : 1; } _has;
}

@property (readonly, nonatomic) char hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) char hasAllowed;
@property (nonatomic) char allowed;
@property (nonatomic) char hasRetryAfterMillis;
@property (nonatomic) long long retryAfterMillis;

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
