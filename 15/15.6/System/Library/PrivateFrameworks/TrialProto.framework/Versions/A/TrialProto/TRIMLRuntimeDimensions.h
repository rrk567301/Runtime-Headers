@class NSString;

@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUnderlyingDomainCode;
@property (retain, nonatomic) NSString *underlyingDomainCode;
@property (readonly, nonatomic) char hasPluginId;
@property (retain, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) char hasCrashPrefixHash;
@property (retain, nonatomic) NSString *crashPrefixHash;

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
