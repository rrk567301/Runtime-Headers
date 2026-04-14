@class FCCKPResponseOperationResult, FCCKPRecordRetrieveResponse, FCCKPQueryRetrieveResponse, FCCKPOperation;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    struct { unsigned char operationCost : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
