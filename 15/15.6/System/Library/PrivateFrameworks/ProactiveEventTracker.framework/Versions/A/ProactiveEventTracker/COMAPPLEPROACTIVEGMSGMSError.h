@interface COMAPPLEPROACTIVEGMSGMSError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char errorType : 1; } _has;
}

@property (nonatomic) char hasErrorType;
@property (nonatomic) int errorType;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned long long errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsErrorType:(id)a0;
- (id)errorTypeAsString:(int)a0;

@end
