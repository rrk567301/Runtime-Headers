@class NSString;

@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUnderlyingDomainCode;
@property (retain, nonatomic) NSString *underlyingDomainCode;
@property (readonly, nonatomic) BOOL hasPluginId;
@property (retain, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) BOOL hasCrashPrefixHash;
@property (retain, nonatomic) NSString *crashPrefixHash;

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
