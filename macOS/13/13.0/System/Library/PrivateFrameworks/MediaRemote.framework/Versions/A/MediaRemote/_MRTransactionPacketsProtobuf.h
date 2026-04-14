@class NSMutableArray;

@interface _MRTransactionPacketsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *packets;

+ (Class)packetsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPackets;
- (void)addPackets:(id)a0;
- (unsigned long long)packetsCount;
- (id)packetsAtIndex:(unsigned long long)a0;

@end
