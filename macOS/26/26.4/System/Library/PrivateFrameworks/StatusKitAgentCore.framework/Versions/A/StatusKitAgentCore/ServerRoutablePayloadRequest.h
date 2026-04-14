@class NSData;

@interface ServerRoutablePayloadRequest : PBRequest <NSCopying> {
    struct { unsigned char client : 1; } _has;
}

@property (nonatomic) BOOL hasClient;
@property (nonatomic) int client;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;

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
- (id)clientAsString:(int)a0;
- (int)StringAsClient:(id)a0;

@end
