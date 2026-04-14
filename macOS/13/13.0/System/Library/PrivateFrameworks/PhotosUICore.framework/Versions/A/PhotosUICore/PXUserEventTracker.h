@class NSDictionary, NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
    NSDictionary *_messageTracerFieldStringLookupForMainStates;
    NSDictionary *_messageTracerFieldStringLookupForSubStates;
    NSDictionary *_messageTracerFieldStringLookupForSubSubStates;
    NSDictionary *_messageTracerFieldStringLookupPerSubStatesForViewCount;
    NSDictionary *_messageTracerFieldStringLookupPerSubSubStatesForViewCount;
}

@property (class, readonly) PXUserEventTracker *sharedInstance;

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

- (id)init;
- (void).cxx_destruct;
- (void)eventSourceDidDisappear:(unsigned long long)a0 sender:(id)a1;
- (void)eventSourceWillAppear:(unsigned long long)a0 sender:(id)a1;
- (void)willViewDetailsWithCurrentContext:(id)a0;
- (void)didFinishViewingDetailsWithCurrentContext:(id)a0;
- (void)didViewDetailsForAssetCollection:(id)a0;
- (void)didPlayMovieForAssetCollection:(id)a0;
- (void)didConfirmDeleteOfMemory;
- (void)didFavoriteMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)didPresentOneUpFromOrigin:(long long)a0;
- (void)didNavigateInOneUpFromOrigin:(long long)a0;
- (void)_resetDetailViewTraversalStatistics;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { } *)a0;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouSuggestionViewedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouInboxViewedCount;
- (void)logNavigationListViewTapWithKey:(struct __CFString { } *)a0;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logFirstTimeExpericeReadiness:(BOOL)a0 forLibrarySize:(long long)a1;
- (void)_logMessageTracerViewCountCounterForLogSubSubState:(unsigned long long)a0;
- (void)_logMessageTracerViewCountCounterForLogSubState:(unsigned long long)a0;
- (void)_logMessageTracerDurationCounterForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)_logMessageTracerDurationCounterForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)_logMessageTracerDurationCounterForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)_logMessageTracerRelatedJumpStatistics:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)_logMessageTracerUsageStatistics:(id)a0 fieldKey:(id)a1 value:(id)a2;
- (id)_truncateToSignificantFigureForValue:(id)a0 numOfSignificantDigits:(int)a1;
- (void)_messageTracerDurationLoggingDryrunForSubState:(unsigned long long)a0 duration:(double)a1;
- (void)_messageTracerDurationLoggingDryrun:(unsigned long long)a0 duration:(double)a1;
- (void)_messageTracerJumpCountLoggingDryrun:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;

@end
