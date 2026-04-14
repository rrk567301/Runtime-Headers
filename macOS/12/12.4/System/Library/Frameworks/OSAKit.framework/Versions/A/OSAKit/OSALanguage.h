@class NSString, OSALanguagePrivate;

@interface OSALanguage : NSObject {
    OSALanguagePrivate *_private;
}

@property (readonly) struct ComponentInstanceRecord { long long x0[1]; } *componentInstance;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *info;
@property (readonly, copy) NSString *version;
@property (readonly) unsigned int type;
@property (readonly) unsigned int subType;
@property (readonly) unsigned int manufacturer;
@property (readonly) unsigned long long features;
@property (readonly, getter=isThreadSafe) BOOL threadSafe;

+ (id)availableLanguages;
+ (id)defaultLanguage;
+ (struct ComponentInstanceRecord { long long x0[1]; } *)defaultAppleScriptComponentInstance;
+ (struct ComponentInstanceRecord { long long x0[1]; } *)defaultComponentInstance;
+ (id)finalizeDispatchQueue;
+ (id)genericComponentInstance;
+ (id)languageForSubType:(unsigned int)a0;
+ (id)languageForName:(id)a0;
+ (id)languageForScriptDataDescriptor:(id)a0;
+ (void)setDefaultLanguage:(id)a0;
+ (id)languageForScript:(id)a0;

- (void)dealloc;
- (id)initWithComponent:(struct ComponentRecord { long long x0[1]; } *)a0;
- (struct ComponentRecord { long long x0[1]; } *)component;
- (id)sharedLanguageInstance;
- (BOOL)supportsCompiling;
- (BOOL)supportsGetSource;
- (BOOL)supportsAECoercion;
- (BOOL)supportsAESending;
- (BOOL)supportsRecording;
- (BOOL)supportsConvenience;
- (BOOL)supportsDialects;
- (BOOL)supportsEventHandling;

@end
