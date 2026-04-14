@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {
    struct { unsigned char httpStatus : 1; } _has;
}

@property (nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) BOOL hasResponseDictionary;
@property (retain, nonatomic) NSData *responseDictionary;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) int httpStatus;

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
