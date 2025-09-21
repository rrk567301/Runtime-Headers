@class NSString;

@interface CLPBundleId : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasShortKey;
@property (retain, nonatomic) NSString *shortKey;
@property (readonly, nonatomic) char hasFullName;
@property (retain, nonatomic) NSString *fullName;

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
