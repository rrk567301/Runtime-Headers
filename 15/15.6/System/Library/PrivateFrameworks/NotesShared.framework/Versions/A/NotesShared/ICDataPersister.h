@class NSString, NSMutableDictionary, ICDataCryptor, NSURL, NSMutableArray;

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ICDataCryptor *dataCryptor;
@property (readonly, nonatomic) NSURL *cacheDirectoryURL;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSMutableArray *allURLs;
@property (readonly, nonatomic) NSMutableDictionary *identifierToDataDictionary;
@property (nonatomic) unsigned long long accumulatedDataSize;

+ (void)deletePasteboardDataFiles;
+ (id)rootCacheDirectoryPathForPasteboard:(char)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)deleteDataFiles;
- (char)verifyDataFiles;
- (void)createDataCryptorIfNecessary;
- (id)initWithObjectIdentifier:(id)a0 forPasteboard:(char)a1;
- (id)loadDataForIdentifier:(id)a0;
- (char)makeSureCacheDirectoryExists;
- (char)saveData:(id)a0 identifier:(id)a1;

@end
