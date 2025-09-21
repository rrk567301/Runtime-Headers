@class ENSecureArchiveFileWrapper, NSMutableDictionary, NSObject;
@protocol ENTextMessageManagerDelegate;

@interface ENTextMessageManager : NSObject

@property (retain, nonatomic) ENSecureArchiveFileWrapper *textMessageHistoryFileWrapper;
@property (retain, nonatomic) NSMutableDictionary *textMessageHashes;
@property (weak, nonatomic) NSObject<ENTextMessageManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDirectoryURL:(id)a0;
- (void)activateIfNeeded;
- (void)_purgeOldHashes;
- (char)_readIfNecessaryWithError:(id *)a0;
- (char)_verifyTextMessage:(id)a0 phoneNumber:(id)a1 verificationDate:(id)a2 publicKey:(id)a3 publicKeyVersion:(id)a4 reportType:(id)a5 outError:(id *)a6;
- (void)purgeAllHashes;
- (void)purgeOldHashes;
- (char)verifyTextMessage:(id)a0 phoneNumber:(id)a1 verificationDate:(id)a2 publicKey:(id)a3 publicKeyVersion:(id)a4 userReport:(char *)a5 outError:(id *)a6;

@end
