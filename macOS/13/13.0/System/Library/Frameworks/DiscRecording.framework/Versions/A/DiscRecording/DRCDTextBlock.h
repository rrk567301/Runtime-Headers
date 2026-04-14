@interface DRCDTextBlock : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (void)setupBindings;
+ (BOOL)isPropertyKey:(id)a0;
+ (id)arrayOfCDTextBlocksFromPacks:(id)a0;
+ (id)cdTextBlockWithLanguage:(id)a0 encoding:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)init;
- (void)finalize;
- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (id)language;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (unsigned long long)encoding;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned long long)flatten;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (id)initWithLanguage:(id)a0 encoding:(unsigned long long)a1;
- (id)trackDictionaries;
- (void)setTrackDictionaries:(id)a0;
- (id)objectForKey:(id)a0 ofTrack:(unsigned long long)a1;
- (void)setObject:(id)a0 forKey:(id)a1 ofTrack:(unsigned long long)a2;

@end
