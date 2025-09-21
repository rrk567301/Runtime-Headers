@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOTaskEvent : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char succeeded : 1; } _has;
}

@property (nonatomic) char hasSucceeded;
@property (nonatomic) char succeeded;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;

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

@end
