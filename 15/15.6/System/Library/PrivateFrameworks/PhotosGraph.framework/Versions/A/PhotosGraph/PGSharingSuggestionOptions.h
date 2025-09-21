@interface PGSharingSuggestionOptions : NSObject

@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) char includeUnverified;
@property (nonatomic) char replaceMergeCandidates;
@property (nonatomic) char debugMode;
@property (nonatomic) char filterLowWeightResults;
@property (nonatomic) char useContactSuggestion;

+ (id)optionsForClient:(unsigned long long)a0;
+ (unsigned long long)_shareSheetSharingStream;

- (id)description;
- (id)init;

@end
