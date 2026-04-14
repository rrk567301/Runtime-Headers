@interface SGDefaultAssets : NSObject

+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)responseToRobotParams;
+ (id)filesystemPathForFilename:(id)a0;
+ (id)dictionaryWithPlistAssetPath:(id)a0;
+ (id)checkFilesystemPathForFilename:(id)a0;
+ (id)quickResponsesPrediction;
+ (id)quickResponsesPredictionVocab;
+ (id)vocabWithTrieAssetPath:(id)a0;
+ (id)_filesystemPathForFilename:(id)a0 isFault:(BOOL)a1;

@end
