@class NSString, LSExtensionPoint, LSPropertyList;

@interface LSExtensionPointRecord : LSRecord

@property (class, retain) LSExtensionPointRecord *extensionPointRecordForCurrentProcess;
@property (class, readonly) BOOL isCurrentProcessAnApplicationExtension;
@property (class, readonly, nonatomic) NSString *identifierForCurrentProcess;

@property (readonly) LSPropertyList *SDKDictionary;
@property (readonly, nonatomic) LSExtensionPoint *compatibilityObject;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *version;
@property (readonly) unsigned int platform;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;
+ (id)enumerator;

- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (unsigned int)platformWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a3;
- (void)_LSRecord_resolve_platform;
- (id)initWithIdentifier:(id)a0 platform:(unsigned int)a1 error:(id *)a2;
- (id)identifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a3;
- (id)nameWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a3;
- (id)versionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a3;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (void)_LSRecord_resolve_identifier;
- (void)_LSRecord_resolve_name;
- (void)_LSRecord_resolve_version;
- (id)SDKDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSExtensionPointData { int x0; unsigned int x1; struct LSVersionNumber { unsigned char x0[32]; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a3;
- (void)_LSRecord_resolve_SDKDictionary;

@end
