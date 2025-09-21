@class _INPBBuildId, NSArray, NSString, _INPBAppId;

@interface _INPBAppBundleInfo : PBCodable <_INPBAppBundleInfo, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAppId *appId;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) char hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (readonly, nonatomic) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (readonly, nonatomic) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (readonly, nonatomic) unsigned long long supportedPlatformsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIntentSupport:(id)a0;
- (void)addLocalizedProjects:(id)a0;
- (void)addSupportedPlatforms:(id)a0;
- (void)clearIntentSupports;
- (void)clearLocalizedProjects;
- (void)clearSupportedPlatforms;
- (id)intentSupportAtIndex:(unsigned long long)a0;
- (id)localizedProjectsAtIndex:(unsigned long long)a0;
- (id)supportedPlatformsAtIndex:(unsigned long long)a0;

@end
