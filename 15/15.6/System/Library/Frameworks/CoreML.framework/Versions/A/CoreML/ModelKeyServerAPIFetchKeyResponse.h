@class ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError;

@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) char hasSuccess;
@property (retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) ModelKeyServerAPIResultError *error;
@property (nonatomic) char hasResult;
@property (nonatomic) int result;

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
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (void)clearOneofValuesForResult;

@end
