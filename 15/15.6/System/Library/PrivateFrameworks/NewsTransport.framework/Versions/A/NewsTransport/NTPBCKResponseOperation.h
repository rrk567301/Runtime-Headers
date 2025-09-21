@class NTPBCKOperation, NTPBCKQueryRetrieveResponse, NTPBCKResponseOperationResult, NTPBCKRecordRetrieveResponse;

@interface NTPBCKResponseOperation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasResponse;
@property (retain, nonatomic) NTPBCKOperation *response;
@property (readonly, nonatomic) char hasResult;
@property (retain, nonatomic) NTPBCKResponseOperationResult *result;
@property (readonly, nonatomic) char hasRecordRetrieveResponse;
@property (retain, nonatomic) NTPBCKRecordRetrieveResponse *recordRetrieveResponse;
@property (readonly, nonatomic) char hasQueryRetrieveResponse;
@property (retain, nonatomic) NTPBCKQueryRetrieveResponse *queryRetrieveResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
