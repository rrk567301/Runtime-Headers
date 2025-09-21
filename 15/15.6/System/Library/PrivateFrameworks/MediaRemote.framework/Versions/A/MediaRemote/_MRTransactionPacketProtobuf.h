@class NSData, _MRTransactionKeyProtobuf, NSString;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    struct { unsigned char totalLength : 1; unsigned char totalWritePosition : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) _MRTransactionKeyProtobuf *key;
@property (readonly, nonatomic) char hasPacketData;
@property (retain, nonatomic) NSData *packetData;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasTotalLength;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) char hasTotalWritePosition;
@property (nonatomic) unsigned long long totalWritePosition;

+ (void)initialize;

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
- (id)customDictionaryRepresentation;

@end
