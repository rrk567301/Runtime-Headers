@class NSMutableArray;

@interface _MRTransactionPacketsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *packets;

+ (Class)packetsType;

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
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)clearPackets;
- (unsigned long long)packetsCount;

@end
