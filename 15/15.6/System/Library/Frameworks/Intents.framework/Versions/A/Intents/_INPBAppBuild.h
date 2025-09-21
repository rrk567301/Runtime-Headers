@class _INPBAppId, _INPBBuildId, NSString;

@interface _INPBAppBuild : PBCodable <_INPBAppBuild, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAppId *appId;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) char hasBuildId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
