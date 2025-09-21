@class NSString;

@interface AWDSiriServerConnectionFailed : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char timestamp : 1; unsigned char connectionType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) int connectionType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
