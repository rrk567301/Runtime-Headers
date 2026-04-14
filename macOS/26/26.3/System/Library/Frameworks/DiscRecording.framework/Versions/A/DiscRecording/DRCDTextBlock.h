@interface DRCDTextBlock : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)arrayOfCDTextBlocksFromPacks:(id)a0;
+ (id)cdTextBlockWithLanguage:(id)a0 encoding:(unsigned long long)a1;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (id)properties;
- (void)finalize;
- (id)valueForUndefinedKey:(id)a0;
- (void)setProperties:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)_cfTypeID;
- (id)description;
- (id)init;
- (id)language;
- (unsigned long long)encoding;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
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
