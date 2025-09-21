@class DIDataPartition, NSString, NSURL, NSMutableData, DITemporaryPassphrase, NSData;

@interface BaseDiskImageCreator : NSObject

@property (class, nonatomic) BOOL debugLogsEnabled;
@property (class, nonatomic) BOOL forwardLogs;

@property (nonatomic) unsigned long long fileSystem;
@property (nonatomic) unsigned long long numBlocks;
@property (copy, nonatomic) NSString *devBSDName;
@property (retain, nonatomic) DIDataPartition *dataPartition;
@property (readonly, nonatomic) NSMutableData *mutableSymmetricKey;
@property (retain, nonatomic) DITemporaryPassphrase *temporaryPassphrase;
@property (nonatomic) unsigned int blockSize;
@property (copy, nonatomic) NSString *volumeName;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic) unsigned long long readPassphraseFlags;
@property (nonatomic) long long imageFormat;
@property (nonatomic) unsigned long long sparseBundleBandSize;
@property (nonatomic) BOOL passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;
@property (copy, nonatomic) NSData *symmetricKey;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)ejectWithError:(id *)a0;
- (void)setPassphrase:(const char *)a0 encryptionMethod:(unsigned long long)a1;
- (id)createEmptyImageWithError:(id *)a0;
- (id)formatImageWithCreateParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 defaultFormat:(long long)a1 error:(id *)a2;
- (id)newAttachWithCreateParams:(id)a0 error:(id *)a1;
- (id)newMKDIDeviceWithError:(id *)a0;
- (BOOL)partitionDiskWithError:(id *)a0;

@end
