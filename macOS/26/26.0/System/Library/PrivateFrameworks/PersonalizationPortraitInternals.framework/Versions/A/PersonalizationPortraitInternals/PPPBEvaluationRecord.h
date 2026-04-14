@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    struct { unsigned char deviceId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) long long deviceId;

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

@end
