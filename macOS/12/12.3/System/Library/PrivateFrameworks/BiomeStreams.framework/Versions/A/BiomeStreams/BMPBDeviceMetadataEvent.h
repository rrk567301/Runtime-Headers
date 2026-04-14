@class NSString;

@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char platform : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPlatform;
@property (nonatomic) int platform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)platformAsString:(int)a0;
- (int)StringAsPlatform:(id)a0;

@end
