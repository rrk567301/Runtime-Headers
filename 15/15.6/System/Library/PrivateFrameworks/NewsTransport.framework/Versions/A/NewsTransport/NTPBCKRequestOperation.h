@class NTPBCKOperation, NTPBCKRequestOperationHeader, NTPBCKQueryRetrieveRequest, NTPBCKRecordRetrieveRequest;

@interface NTPBCKRequestOperation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) NTPBCKRequestOperationHeader *header;
@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) NTPBCKOperation *request;
@property (readonly, nonatomic) char hasRecordRetrieveRequest;
@property (retain, nonatomic) NTPBCKRecordRetrieveRequest *recordRetrieveRequest;
@property (readonly, nonatomic) char hasQueryRetrieveRequest;
@property (retain, nonatomic) NTPBCKQueryRetrieveRequest *queryRetrieveRequest;

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
