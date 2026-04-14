@class PCPInputSignals;

@interface PCPComputeRequest : PBRequest <NSCopying> {
    struct { unsigned char completionStatus : 1; unsigned char receivedInterruptRequest : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInput;
@property (retain, nonatomic) PCPInputSignals *input;
@property (nonatomic) BOOL hasCompletionStatus;
@property (nonatomic) int completionStatus;
@property (nonatomic) BOOL hasReceivedInterruptRequest;
@property (nonatomic) BOOL receivedInterruptRequest;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCompletionStatus:(id)a0;
- (id)completionStatusAsString:(int)a0;

@end
