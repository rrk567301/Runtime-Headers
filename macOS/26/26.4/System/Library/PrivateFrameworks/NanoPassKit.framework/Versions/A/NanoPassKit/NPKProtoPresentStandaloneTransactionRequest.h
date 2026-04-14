@class NSString;

@interface NPKProtoPresentStandaloneTransactionRequest : PBRequest <NSCopying> {
    struct { unsigned char validUntilEpochTimeInterval : 1; unsigned char transactionType : 1; } _has;
}

@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (readonly, nonatomic) BOOL hasWatchPassUniqueID;
@property (retain, nonatomic) NSString *watchPassUniqueID;
@property (nonatomic) BOOL hasValidUntilEpochTimeInterval;
@property (nonatomic) double validUntilEpochTimeInterval;
@property (readonly, nonatomic) BOOL hasTerminalReaderIdentifier;
@property (retain, nonatomic) NSString *terminalReaderIdentifier;

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

@end
