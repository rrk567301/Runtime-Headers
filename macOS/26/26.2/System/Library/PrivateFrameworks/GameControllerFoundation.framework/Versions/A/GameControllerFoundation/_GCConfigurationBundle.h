@class NSString, GCVersion;

@interface _GCConfigurationBundle : NSBundle <NSCopying>

@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;
@property (readonly) NSString *configurationType;
@property (readonly) GCVersion *compatibilityVersion;

- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0;
- (id)init;

@end
