@class NSString, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface NSPersistentUIRecord : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_keyedState;
    NSMutableArray *_securityScopedBookmarks;
    unsigned char _encryptionKey[16];
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSData *archivedState;
@property (readonly, copy) NSString *persistentID;
@property (readonly, copy) NSArray *securityScopedBookmarks;
@property (readonly) unsigned int windowID;
@property char isCarbonWindow;
@property (readonly) char isFromLSFileListEra;
@property (readonly, getter=isGlobal) char global;
@property (readonly, copy) NSDictionary *keyedState;
@property (readonly) unsigned long long approximateWrittenSize;

+ (void)coalesceRecords:(id)a0;
+ (id)parseOneRecordFromReadBlock:(id /* block */)a0 withDecryptionKeys:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addKeyedState:(id)a0;
- (void)_setKeyedState:(id)a0;
- (id)initForDecoding;
- (id)_keyedStateForKey:(id)a0;
- (void)_setSecurityScopedBookmarks:(id)a0;
- (void)addSecurityScopedBookmarks:(id)a0;
- (struct __CFData { } *)copyData;
- (id)copyStateDecoderRequiringSecureCoding:(char)a0 restorationOptions:(id)a1;
- (void)generateArchiveRequiringSecureCoding:(char)a0 usingBlock:(id /* block */)a1;
- (id)initForEncodingWithIdentifier:(id)a0 windowID:(unsigned int)a1;
- (char)keyPathStateOfClasses:(id)a0 forKey:(id)a1 requireSecureCoding:(char)a2 returningValue:(id *)a3;
- (void)mergeFromRecord:(id)a0;
- (id)openedPushStateUnarchiversRequiringSecureCoding:(char)a0;
- (char)parsePayloadFromData:(void *)a0 length:(unsigned long long)a1;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1 type:(int)a2;
- (void)setEncryptionKey:(id)a0;

@end
