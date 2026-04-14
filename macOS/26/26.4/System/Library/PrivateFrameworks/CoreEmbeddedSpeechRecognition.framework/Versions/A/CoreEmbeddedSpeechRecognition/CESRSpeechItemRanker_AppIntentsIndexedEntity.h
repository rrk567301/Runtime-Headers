@class NSMutableDictionary, NSMutableSet;

@interface CESRSpeechItemRanker_AppIntentsIndexedEntity : CESRSpeechItemRanker {
    NSMutableDictionary *_setDict;
    BOOL _appEntityIngestionEnabled;
    NSMutableSet *_codepathIds;
    unsigned long long _numTotalEnrolled;
    BOOL _didLoadConfigFromTrial;
}

+ (BOOL)_appEntityIngestionEnabledForFeatureFlagStatus:(BOOL)a0 overallAppEntityLimit:(unsigned long long)a1;

- (id)sets;
- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (BOOL)hasSets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActivatedCodepathIds;
- (id)getAllCodepathIds;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;

@end
