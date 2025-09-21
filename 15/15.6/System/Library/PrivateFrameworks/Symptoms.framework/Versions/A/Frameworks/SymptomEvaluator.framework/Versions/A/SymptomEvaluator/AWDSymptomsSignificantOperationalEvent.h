@class NSString;

@interface AWDSymptomsSignificantOperationalEvent : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char timestamp : 1; unsigned char error : 1; unsigned char name : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasName;
@property (nonatomic) int name;
@property (readonly, nonatomic) char hasAlternateName;
@property (retain, nonatomic) NSString *alternateName;
@property (nonatomic) char hasError;
@property (nonatomic) int error;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsName:(id)a0;
- (id)nameAsString:(int)a0;
- (int)StringAsError:(id)a0;
- (id)errorAsString:(int)a0;

@end
