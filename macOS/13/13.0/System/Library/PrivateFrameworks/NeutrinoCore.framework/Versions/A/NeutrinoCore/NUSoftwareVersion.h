@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)frameworkVersion;
+ (id)systemBuildVersion;
+ (id)_frameworkVersion;
+ (id)currentSoftwareVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSoftwareVersion:(id)a0;
- (id)archivalRepresentation;

@end
