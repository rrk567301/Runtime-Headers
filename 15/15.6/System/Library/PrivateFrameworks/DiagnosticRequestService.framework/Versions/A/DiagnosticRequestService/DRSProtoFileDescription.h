@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {
    struct { unsigned char logSize : 1; } _has;
}

@property (readonly, nonatomic) char hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) char hasLogSize;
@property (nonatomic) unsigned long long logSize;
@property (readonly, nonatomic) char hasFileName;
@property (retain, nonatomic) NSString *fileName;

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
