@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOTaskEvent : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char succeeded : 1; } _has;
}

@property (nonatomic) BOOL hasSucceeded;
@property (nonatomic) BOOL succeeded;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

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

@end
