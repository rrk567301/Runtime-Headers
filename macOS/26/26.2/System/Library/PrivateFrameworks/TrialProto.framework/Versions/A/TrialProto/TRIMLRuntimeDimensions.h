@class NSString;

@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUnderlyingDomainCode;
@property (retain, nonatomic) NSString *underlyingDomainCode;
@property (readonly, nonatomic) BOOL hasPluginId;
@property (retain, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) BOOL hasCrashPrefixHash;
@property (retain, nonatomic) NSString *crashPrefixHash;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
