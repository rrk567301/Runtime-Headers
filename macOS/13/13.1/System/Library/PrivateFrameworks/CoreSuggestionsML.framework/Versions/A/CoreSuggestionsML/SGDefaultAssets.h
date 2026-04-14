@interface SGDefaultAssets : NSObject

+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)filesystemPathForFilename:(id)a0;
+ (id)checkFilesystemPathForFilename:(id)a0;
+ (id)_filesystemPathForFilename:(id)a0 isFault:(BOOL)a1;
+ (id)quickResponsesPrediction;
+ (id)quickResponsesPredictionVocab;
+ (id)responseToRobotParams;
+ (id)dictionaryWithPlistAssetPath:(id)a0;
+ (id)vocabWithTrieAssetPath:(id)a0;

@end
