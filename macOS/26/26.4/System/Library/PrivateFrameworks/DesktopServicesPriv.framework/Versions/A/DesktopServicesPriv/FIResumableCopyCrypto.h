@class NSData;

@interface FIResumableCopyCrypto : NSObject {
    NSData *_cachedKey;
}

@property (retain, nonatomic) NSData *keyData;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)encryptData:(id)a0;
- (id)readKey;
- (id)createKey;
- (id)decryptData:(id)a0;
- (BOOL)deleteKey;
- (BOOL)isKeychainUnlocked;
- (id)roundTrip:(id)a0;
- (id)sharedKeyDict;
- (BOOL)storeKey:(id)a0;

@end
