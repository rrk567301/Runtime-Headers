@class NSMutableDictionary, NSDictionary, SBApplication, NSString, SBAppLocator;

@interface SBAppContext : NSObject {
    SBApplication *_application;
    NSMutableDictionary *_thunksForSelectors;
    NSMutableDictionary *_thunksForSelectorsForClassCodes;
    NSDictionary *_classNamesForCodes;
    NSDictionary *_codesForPropertyNames;
    NSDictionary *_codesForScriptingClassNames;
    NSDictionary *_inheritanceCodesForClassCodes;
    NSDictionary *_codesForClassNames;
    NSDictionary *_propertyNamesForCodes;
    NSDictionary *_scriptingClassNamesForCodes;
    NSString *_name;
    id _delegate;
    SBAppLocator *_locator;
    int _sendMode;
    long long _timeout;
}

+ (id)contextWithPID:(int)a0;
+ (id)contextWithURL:(id)a0;
+ (id)contextWithBundleIdentifier:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithPID:(int)a0;
- (id)codesForPropertyNames;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)setApplication:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)path;
- (Class)classForScriptingClass:(id)a0;
- (id)init;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)classNamesForCodes;
- (unsigned int)_declaredClassCodeForPropertyCode:(unsigned int)a0 inClassCode:(unsigned int)a1;
- (id)_thunkForObject:(id)a0 andSelector:(SEL)a1;
- (void)addThunk:(id)a0 forClassCode:(unsigned int)a1 element:(id)a2;
- (Class)classForCode:(unsigned int)a0;
- (unsigned int)codeForClass:(Class)a0;
- (unsigned int)codeForPropertyName:(id)a0;
- (unsigned int)codeForScriptingClassName:(id)a0;
- (id)codesForClassNames;
- (short)createEmptyEvent:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withClass:(unsigned int)a1 id:(unsigned int)a2;
- (id)descriptorForObject:(id)a0;
- (id)descriptorForObject:(id)a0 typeCode:(unsigned int)a1;
- (BOOL)dynamicMojo;
- (id)eventFailed:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withError:(id)a1;
- (unsigned int)inheritanceCodeForClassCode:(unsigned int)a0;
- (void)makeGlueForSdef:(id)a0 basename:(id)a1;
- (void)object:(id)a0 forwardInvocation:(id)a1;
- (id)object:(id)a0 methodSignatureForSelector:(SEL)a1;
- (BOOL)object:(id)a0 respondsToSelector:(SEL)a1;
- (id)objectForDescriptor:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (id)objectForDescriptor:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 atIndex:(long long)a1;
- (id)processReply:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 andError:(int)a1 forEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a2 error:(id *)a3;
- (id)propertyNameForCode:(unsigned int)a0;
- (id)propertyNamesForCodes;
- (id)qualifiedSpecifier;
- (id)scriptingClassNameForCode:(unsigned int)a0;
- (id)sdef;
- (id)sendEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 error:(id *)a1;

@end
