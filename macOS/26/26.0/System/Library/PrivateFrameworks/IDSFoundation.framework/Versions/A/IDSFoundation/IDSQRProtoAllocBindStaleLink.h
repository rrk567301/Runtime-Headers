@class NSString;

@interface IDSQRProtoAllocBindStaleLink : PBCodable <NSCopying> {
    struct { unsigned char linkId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServerAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) BOOL hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;

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
