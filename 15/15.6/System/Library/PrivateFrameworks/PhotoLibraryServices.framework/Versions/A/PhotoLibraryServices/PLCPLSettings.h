@class PLPhotoLibraryBundle, PLAppPrivateData, PLPhotoLibraryIdentifier;

@interface PLCPLSettings : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLAppPrivateData *_appPrivateData;
    PLPhotoLibraryIdentifier *_libraryIdentifier;
    char _iCPLEnabled;
    unsigned long long _libraryType;
    long long _prefetchMode;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) char isICPLEnabled;
@property (readonly) char isAppLibrary;
@property (readonly) long long prefetchMode;

+ (id)settingsWithPathManager:(id)a0;
+ (char)setPrefetchMode:(long long)a0 withLibraryBundle:(id)a1 error:(id *)a2;
+ (id)settingsWithLibraryBundle:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deriveMainScopeIdentifier;
- (id)fingerprintContext;
- (id)initWithLibraryBundle:(id)a0;
- (char)isCloudPhotoLibraryEnabled;
- (char)isKeepOriginalsEnabled;
- (char)setPrefetchMode:(long long)a0 error:(id *)a1;
- (id)_readLegacyBoolDefaultForKey:(id)a0;
- (id)_readSettingsPayload;
- (char)_writeSettingsPayload:(id)a0 notify:(char)a1 error:(id *)a2 didWriteValueBlock:(id /* block */)a3;
- (char)_writeSettingsValue:(id)a0 forKey:(id)a1 persist:(char)a2 notify:(char)a3 error:(id *)a4 didWriteValueBlock:(id /* block */)a5;
- (char)clearRunOnceFlag:(unsigned long long)a0 error:(id *)a1;
- (char)migrateSettings:(id *)a0;
- (char)runOnceFlagIsSet:(unsigned long long)a0;
- (unsigned long long)runOnceFlags;
- (char)setICPLEnabled:(char)a0 error:(id *)a1;
- (char)setRunOnceFlag:(unsigned long long)a0 error:(id *)a1;

@end
