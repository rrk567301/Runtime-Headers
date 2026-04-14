@class FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPRequestOperationHeader *_header;
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
    FCCKPOperation *_request;
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
