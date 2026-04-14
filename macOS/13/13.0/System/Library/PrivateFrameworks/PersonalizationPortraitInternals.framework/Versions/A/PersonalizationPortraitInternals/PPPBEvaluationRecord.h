@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    struct { unsigned char deviceId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) long long deviceId;

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
