@class NSURL, NSData;

@interface FMDataArchiver : NSObject

@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSData *unitTestData;
@property (nonatomic) long long dataProtectionClass;
@property (nonatomic) char backedUp;
@property (nonatomic) char createDirectories;

+ (id)defaultClasses;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)saveDictionary:(id)a0;
- (id)readDictionaryAndClasses:(id)a0 error:(id *)a1;
- (void)injectUnitTestData:(id)a0;
- (id)readArrayAndClasses:(id)a0 error:(id *)a1;
- (id)readDataOfClasses:(id)a0 error:(id *)a1;
- (id)saveArray:(id)a0;
- (char)saveArray:(id)a0 error:(id *)a1;
- (char)saveDictionary:(id)a0 error:(id *)a1;
- (id)saveObject:(id)a0;
- (id)underlyingDataWithError:(id *)a0;

@end
