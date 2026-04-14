@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *regionFormat;
@property (retain) NSString *osVersion;
@property (retain) NSString *deviceType;
@property (retain) NSString *applicationBuildVersion;
@property (retain) NSString *platformArchitecture;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 platformArchitecture:(id)a4;
- (id)DictionaryRepresentation;

@end
