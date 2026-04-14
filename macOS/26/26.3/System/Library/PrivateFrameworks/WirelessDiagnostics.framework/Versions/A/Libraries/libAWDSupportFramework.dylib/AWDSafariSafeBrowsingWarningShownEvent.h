@interface AWDSafariSafeBrowsingWarningShownEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char provider : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasProvider;
@property (nonatomic) int provider;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsProvider:(id)a0;
- (id)providerAsString:(int)a0;

@end
