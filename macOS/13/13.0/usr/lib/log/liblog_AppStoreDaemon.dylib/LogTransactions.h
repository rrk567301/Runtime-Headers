@class NSMutableArray;

@interface LogTransactions : PBCodable <NSCopying> {
    NSMutableArray *_transactionIDs;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)formattedText;

@end
