@class ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError;

@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) ModelKeyServerAPIResultError *error;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;

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
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (void)clearOneofValuesForResult;

@end
