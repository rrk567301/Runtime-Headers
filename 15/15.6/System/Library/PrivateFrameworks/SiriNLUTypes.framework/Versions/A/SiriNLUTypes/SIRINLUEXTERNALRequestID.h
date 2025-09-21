@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALRequestID : PBCodable <NSCopying> {
    struct { unsigned char requester : 1; } _has;
}

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasLoggableUserId;
@property (retain, nonatomic) NSString *loggableUserId;
@property (readonly, nonatomic) char hasTrpId;
@property (retain, nonatomic) NSString *trpId;
@property (readonly, nonatomic) char hasConnectionId;
@property (retain, nonatomic) NSString *connectionId;
@property (nonatomic) char hasRequester;
@property (nonatomic) int requester;

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
- (int)StringAsRequester:(id)a0;
- (id)requesterAsString:(int)a0;

@end
