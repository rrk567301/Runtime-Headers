@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    struct { unsigned char deviceId : 1; } _has;
}

@property (readonly, nonatomic) char hasContents;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) char hasDeviceId;
@property (nonatomic) long long deviceId;

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
