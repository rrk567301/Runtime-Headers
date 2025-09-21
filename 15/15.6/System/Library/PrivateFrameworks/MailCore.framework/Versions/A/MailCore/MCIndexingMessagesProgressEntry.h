@class NSString, NSObject;
@protocol OS_os_log;

@interface MCIndexingMessagesProgressEntry : MCProgressEntry <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) char userSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingShouldDisplay;

- (id)statusText;
- (char)indeterminate;
- (char)shouldDisplay;
- (float)_maxIndexedToTotalRatio;
- (long long)_minMessageToIndex;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
