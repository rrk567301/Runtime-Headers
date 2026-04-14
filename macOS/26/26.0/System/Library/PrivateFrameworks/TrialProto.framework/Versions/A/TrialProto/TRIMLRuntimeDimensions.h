@class NSString;

@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUnderlyingDomainCode;
@property (retain, nonatomic) NSString *underlyingDomainCode;
@property (readonly, nonatomic) BOOL hasPluginId;
@property (retain, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) BOOL hasCrashPrefixHash;
@property (retain, nonatomic) NSString *crashPrefixHash;

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
