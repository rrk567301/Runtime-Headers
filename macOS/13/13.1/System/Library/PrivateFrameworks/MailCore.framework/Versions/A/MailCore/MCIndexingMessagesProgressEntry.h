@class NSString, NSObject;
@protocol OS_os_log;

@interface MCIndexingMessagesProgressEntry : MCProgressEntry <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL userSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingShouldDisplay;

- (BOOL)indeterminate;
- (id)statusText;
- (BOOL)shouldDisplay;
- (id)observedProgressKeypaths;
- (void)refreshValues;
- (id)progressName;
- (id)progressSlice;
- (long long)_minMessageToIndex;
- (float)_maxIndexedToTotalRatio;

@end
