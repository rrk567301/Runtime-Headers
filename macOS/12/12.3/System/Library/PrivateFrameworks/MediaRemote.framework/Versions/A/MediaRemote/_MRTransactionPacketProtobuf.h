@class NSString, _MRTransactionKeyProtobuf, NSData;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    struct { unsigned char totalLength : 1; unsigned char totalWritePosition : 1; } _has;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)customDictionaryRepresentation;

@end
