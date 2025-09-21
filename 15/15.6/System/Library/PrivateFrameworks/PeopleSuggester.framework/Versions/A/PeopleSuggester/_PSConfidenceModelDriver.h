@class NSMutableDictionary;

@interface _PSConfidenceModelDriver : NSObject

@property (retain, nonatomic) NSMutableDictionary *confidenceModelDictionary;

+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

- (id)init;
- (void).cxx_destruct;
- (id)getDictionaryFromArchiveAtPath:(id)a0;
- (char)addEventForModel:(id)a0 forUseCaseKey:(id)a1 event:(id)a2;
- (double)getConfidenceForModel:(id)a0 forUseCaseKey:(id)a1;
- (id)getOrMakeConfidenceModelDictionary;
- (char)registerModelKey:(id)a0 forUseCaseKey:(id)a1 confidenceWindowSize:(int)a2 minimumInstanceCount:(int)a3;
- (void)writeArchive:(id)a0 toFilePath:(id)a1;
- (void)writeArchiveFromDict:(id)a0;

@end
