@class PLPhotoLibraryBundle, PLAppPrivateData;

@interface PLCPLSettings : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAppPrivateData *_appPrivateData;
    BOOL _iCPLEnabled;
    unsigned long long _libraryType;
    long long _prefetchMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isICPLEnabled;
@property (readonly) BOOL isAppLibrary;
@property (readonly) long long prefetchMode;

+ (id)settingsWithPathManager:(id)a0;
+ (BOOL)setPrefetchMode:(long long)a0 withLibraryBundle:(id)a1 error:(id *)a2;
+ (id)settingsWithLibraryBundle:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deriveMainScopeIdentifier;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)isKeepOriginalsEnabled;
- (BOOL)setPrefetchMode:(long long)a0 error:(id *)a1;
- (id)_readLegacyBoolDefaultForKey:(id)a0;
- (id)_readSettingsPayload;
- (BOOL)_writeSettingsPayload:(id)a0 notify:(BOOL)a1 error:(id *)a2 didWriteValueBlock:(id /* block */)a3;
- (BOOL)_writeSettingsValue:(id)a0 forKey:(id)a1 notify:(BOOL)a2 error:(id *)a3 didWriteValueBlock:(id /* block */)a4;
- (BOOL)clearRunOnceFlag:(unsigned long long)a0 error:(id *)a1;
- (BOOL)migrateSettings:(id *)a0;
- (BOOL)runOnceFlagIsSet:(unsigned long long)a0;
- (unsigned long long)runOnceFlags;
- (BOOL)setAppLibrary:(BOOL)a0 error:(id *)a1;
- (BOOL)setICPLEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)setRunOnceFlag:(unsigned long long)a0 error:(id *)a1;

@end
