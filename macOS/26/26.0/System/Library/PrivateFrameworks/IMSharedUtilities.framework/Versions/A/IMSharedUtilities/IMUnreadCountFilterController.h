@interface IMUnreadCountFilterController : NSObject <IMUnreadCountFiltering>

@property (copy, nonatomic) id /* block */ refreshHandler;
@property (nonatomic) unsigned long long excludes;
@property (nonatomic) BOOL filteredByFocus;
@property (nonatomic) BOOL filteredByAssistiveAccess;
@property (nonatomic) BOOL filtersMutedChats;

+ (id)calculateExcludedFilterActions;
+ (unsigned long long)calculateExcludes;

- (id)init;
- (void).cxx_destruct;
- (void)willBeginCalculatingUnreadCount;
- (void)_defaultFilterModeUpdated:(id)a0;
- (BOOL)_handlesAllowedByAssistiveAccess:(id)a0;
- (BOOL)_handlesAllowedByFocus:(id)a0;
- (BOOL)_isReportTimeSensitive:(id)a0;
- (id)_muteIdentifiersForReport:(id)a0;
- (BOOL)_muteSettingsAllowReport:(id)a0;
- (void)_mutedChatListUpdated:(id)a0;
- (BOOL)allowUnreadCountReport:(id)a0;
- (BOOL)shouldExcludeFilterActionForReport:(id)a0;
- (BOOL)shouldIncludeForDefaultFilterMode:(id)a0;

@end
