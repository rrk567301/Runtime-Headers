@class NSMutableArray;

@interface AWDNFCExpressTransactionStatistic : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _expressModeConfiguration;
    NSMutableArray *_transactionLists;
    struct { unsigned char timestamp : 1; unsigned char expressModeConfiguration : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
