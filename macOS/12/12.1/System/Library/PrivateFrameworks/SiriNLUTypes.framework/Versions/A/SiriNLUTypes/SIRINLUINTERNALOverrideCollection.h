@class NSString, NSMutableArray;

@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; } _has;
}

@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) BOOL hasAssetId;
@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *parseOverrides;

+ (Class)parseOverridesType;

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
- (void)addParseOverrides:(id)a0;
- (unsigned long long)parseOverridesCount;
- (void)clearParseOverrides;
- (id)parseOverridesAtIndex:(unsigned long long)a0;

@end
