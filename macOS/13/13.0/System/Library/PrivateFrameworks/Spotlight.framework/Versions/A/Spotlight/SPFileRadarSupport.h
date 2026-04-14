@class NSString;

@interface SPFileRadarSupport : NSObject {
    NSString *_logForTTR;
    NSString *_fvFilePath;
}

+ (id)getSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearExistingFiles;
- (void)setFVFilePathWithQueryString:(id)a0;
- (void)dumpFeatureVectorForRankingItems:(id)a0 query:(id)a1;
- (void)dumpTTRDebugFilesForQuery:(id)a0 rankingItems:(id)a1;
- (void)saveLogForTTR:(id)a0;
- (id)getTTRURL;

@end
