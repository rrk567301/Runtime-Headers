@class NSString;

@interface IDSQRProtoAllocBindStaleLink : PBCodable <NSCopying> {
    struct { unsigned char linkId : 1; } _has;
}

@property (readonly, nonatomic) char hasServerAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) char hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) char hasLinkId;
@property (nonatomic) unsigned int linkId;

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
