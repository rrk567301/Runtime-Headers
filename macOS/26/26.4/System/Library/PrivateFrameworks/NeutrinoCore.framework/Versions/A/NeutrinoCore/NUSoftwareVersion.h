@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)frameworkVersion;
+ (id)currentSoftwareVersion;
+ (id)systemBuildVersion;
+ (id)_frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)archivalRepresentation;
- (BOOL)isEqualToSoftwareVersion:(id)a0;

@end
