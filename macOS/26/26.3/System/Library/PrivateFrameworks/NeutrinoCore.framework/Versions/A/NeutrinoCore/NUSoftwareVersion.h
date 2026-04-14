@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)currentSoftwareVersion;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)archivalRepresentation;
- (BOOL)isEqualToSoftwareVersion:(id)a0;

@end
