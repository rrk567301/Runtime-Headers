@class NSString, NSArray, NSData, NSMutableDictionary, NSMutableArray;

@interface NSPersistentUIRecord : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_keyedState;
    NSMutableArray *_securityScopedBookmarks;
    unsigned char _encryptionKey[16];
}

@property (copy) NSData *archivedState;
@property (readonly, copy) NSString *persistentID;
@property (readonly, copy) NSArray *securityScopedBookmarks;
@property (readonly) unsigned int windowID;
@property BOOL isCarbonWindow;
@property (readonly) BOOL isFromLSFileListEra;

+ (id)parseOneRecordFromReadBlock:(id /* block */)a0 withDecryptionKeys:(id)a1;
+ (void)coalesceRecords:(id)a0;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (BOOL)isGlobal;
- (id)initForEncodingWithIdentifier:(id)a0 windowID:(unsigned int)a1;
- (id)initForDecoding;
- (void)setEncryptionKey:(id)a0;
- (struct __CFData { } *)copyData;
- (BOOL)parsePayloadFromData:(void *)a0 length:(unsigned long long)a1;
- (void)mergeFromRecord:(id)a0;
- (id)copyStateDecoderRequiringSecureCoding:(BOOL)a0;
- (void)generateArchiveRequiringSecureCoding:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)keyedState;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1;
- (void)_setKeyedState:(id)a0;
- (void)_addKeyedState:(id)a0;
- (id)_keyedStateForKey:(id)a0;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1 type:(int)a2;
- (BOOL)keyPathStateOfClasses:(id)a0 forKey:(id)a1 requireSecureCoding:(BOOL)a2 returningValue:(id *)a3;
- (id)openedPushStateUnarchiversRequiringSecureCoding:(BOOL)a0;
- (void)addSecurityScopedBookmarks:(id)a0;
- (void)_setSecurityScopedBookmarks:(id)a0;

@end
