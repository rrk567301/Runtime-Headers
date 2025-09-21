@class NSString, NSMutableArray;

@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; } _has;
}

@property (nonatomic) char hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) char hasAssetId;
@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *parseOverrides;
@property (retain, nonatomic) NSMutableArray *componentOverrides;

+ (Class)componentOverridesType;
+ (Class)parseOverridesType;

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
- (void)addComponentOverrides:(id)a0;
- (void)addParseOverrides:(id)a0;
- (void)clearComponentOverrides;
- (void)clearParseOverrides;
- (id)componentOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)componentOverridesCount;
- (id)parseOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)parseOverridesCount;

@end
