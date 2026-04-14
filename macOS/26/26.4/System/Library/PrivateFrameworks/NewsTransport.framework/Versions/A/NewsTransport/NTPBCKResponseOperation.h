@class NTPBCKOperation, NTPBCKQueryRetrieveResponse, NTPBCKResponseOperationResult, NTPBCKRecordRetrieveResponse;

@interface NTPBCKResponseOperation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) NTPBCKOperation *response;
@property (readonly, nonatomic) BOOL hasResult;
@property (retain, nonatomic) NTPBCKResponseOperationResult *result;
@property (readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property (retain, nonatomic) NTPBCKRecordRetrieveResponse *recordRetrieveResponse;
@property (readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property (retain, nonatomic) NTPBCKQueryRetrieveResponse *queryRetrieveResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
