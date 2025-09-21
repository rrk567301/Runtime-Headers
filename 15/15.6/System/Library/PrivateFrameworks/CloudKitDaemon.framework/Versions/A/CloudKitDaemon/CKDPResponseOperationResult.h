@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) CKDPResponseOperationResultError *error;

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
- (int)StringAsCode:(id)a0;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (id)codeAsString:(int)a0;

@end
