@class NSString;

@interface MXProcessingError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; unsigned char errorSource : 1; } _has;
}

@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) char hasErrorSource;
@property (nonatomic) int errorSource;
@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;

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
- (int)StringAsErrorSource:(id)a0;
- (id)errorSourceAsString:(int)a0;

@end
