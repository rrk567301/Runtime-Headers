@class NSString;

@interface MXProcessingError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; unsigned char errorSource : 1; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasErrorSource;
@property (nonatomic) int errorSource;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsErrorSource:(id)a0;
- (id)errorSourceAsString:(int)a0;

@end
