@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface ATXStackRotationSessionManager : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *stackIdToStackRotationSessions;
@property (readonly, nonatomic) NSMutableArray *completedSessions;
@property (readonly, nonatomic) NSMutableArray *recentHomeScreenCachedSuggestions;
@property (readonly, nonatomic) NSMutableSet *nPlusOneSuggestionUUIDsWithFirstRotation;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_tryEndStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (void)_tryPruneSessionsOverMaxLimit;
- (void)_tryStartStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (void)_tryUpdateNPlusOneStatusForSession:(id)a0 stackId:(id)a1;
- (void)_tryUpdateStackRotationSessionWithSystemSuggestLayout:(id)a0;
- (id)initWithStackIdToStackRotationSessions:(id)a0 completedSessions:(id)a1 recentHomeScreenCachedSuggestions:(id)a2 nPlusOneSuggestionUUIDsWithFirstRotation:(id)a3;
- (char)isEqualToATXStackRotationSessionManager:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)removeAndReturnCompletedSessions;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)uuidsOfNPlusOneSuggestionsFromCachedSuggestions:(id)a0;

@end
