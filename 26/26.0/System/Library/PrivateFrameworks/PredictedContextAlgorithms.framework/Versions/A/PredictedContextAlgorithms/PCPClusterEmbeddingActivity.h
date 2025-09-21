@class NSString, NSData;

@interface PCPClusterEmbeddingActivity : PBCodable <NSCopying> {
    struct { unsigned char startTimeCFAbsolute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasHkObjectUUID;
@property (retain, nonatomic) NSData *hkObjectUUID;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;

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
