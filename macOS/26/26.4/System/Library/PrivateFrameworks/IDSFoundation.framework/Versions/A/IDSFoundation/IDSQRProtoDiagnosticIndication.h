@class NSString;

@interface IDSQRProtoDiagnosticIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; unsigned char packetsRecordDuration : 1; } _has;
}

@property (retain, nonatomic) NSString *failureSubtype;
@property (retain, nonatomic) NSString *failureSubtypeContext;
@property (nonatomic) BOOL hasPacketsRecordDuration;
@property (nonatomic) unsigned int packetsRecordDuration;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

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
