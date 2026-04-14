@interface DRCDTextBlock : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)arrayOfCDTextBlocksFromPacks:(id)a0;
+ (id)cdTextBlockWithLanguage:(id)a0 encoding:(unsigned long long)a1;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (id)properties;
- (void)setProperties:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)encoding;
- (id)language;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)finalize;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)_cfTypeID;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (unsigned long long)flatten;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (id)initWithLanguage:(id)a0 encoding:(unsigned long long)a1;
- (id)objectForKey:(id)a0 ofTrack:(unsigned long long)a1;
- (void)setObject:(id)a0 forKey:(id)a1 ofTrack:(unsigned long long)a2;
- (void)setTrackDictionaries:(id)a0;
- (id)trackDictionaries;

@end
