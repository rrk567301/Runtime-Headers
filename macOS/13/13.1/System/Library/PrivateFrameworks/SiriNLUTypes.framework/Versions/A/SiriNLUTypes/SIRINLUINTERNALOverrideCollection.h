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
@property (retain, nonatomic) NSMutableArray *componentOverrides;

+ (Class)parseOverridesType;
+ (Class)componentOverridesType;

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
- (void)clearParseOverrides;
- (void)addParseOverrides:(id)a0;
- (unsigned long long)parseOverridesCount;
- (id)parseOverridesAtIndex:(unsigned long long)a0;
- (void)clearComponentOverrides;
- (void)addComponentOverrides:(id)a0;
- (unsigned long long)componentOverridesCount;
- (id)componentOverridesAtIndex:(unsigned long long)a0;

@end
