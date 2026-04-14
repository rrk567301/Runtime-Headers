@class NSString, GCVersion;

@interface _GCConfigurationBundle : NSBundle <NSCopying>

@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;
@property (readonly) NSString *configurationType;
@property (readonly) GCVersion *compatibilityVersion;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)initWithPath:(id)a0 error:(id *)a1;

@end
