@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOEventStatus : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char succeeded : 1; } _has;
}

@property (nonatomic) BOOL hasSucceeded;
@property (nonatomic) BOOL succeeded;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
