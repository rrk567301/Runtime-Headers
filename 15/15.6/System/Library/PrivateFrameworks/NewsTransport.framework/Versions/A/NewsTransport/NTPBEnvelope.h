@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {
    struct { unsigned char contentTypeMinorVersion : 1; unsigned char contentTypePatchVersion : 1; } _has;
}

@property (nonatomic) int contentTypeVersion;
@property (nonatomic) int contentType;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) char hasContentTypeMinorVersion;
@property (nonatomic) int contentTypeMinorVersion;
@property (nonatomic) char hasContentTypePatchVersion;
@property (nonatomic) int contentTypePatchVersion;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
