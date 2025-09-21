@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {
    struct { unsigned char connectionTechnology : 1; unsigned char interfaceIndex : 1; unsigned char sendBufferSize : 1; unsigned char timestamp : 1; unsigned char wwanPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasConnectionURL;
@property (retain, nonatomic) NSString *connectionURL;
@property (nonatomic) char hasInterfaceIndex;
@property (nonatomic) unsigned long long interfaceIndex;
@property (nonatomic) char hasSendBufferSize;
@property (nonatomic) unsigned long long sendBufferSize;
@property (nonatomic) char hasWwanPreferred;
@property (nonatomic) char wwanPreferred;
@property (nonatomic) char hasConnectionTechnology;
@property (nonatomic) unsigned long long connectionTechnology;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
