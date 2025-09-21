@class NSString, NSArray;

@interface ATXActivity : NSObject

@property (readonly, nonatomic) char allowsSmartEntry;
@property (readonly, nonatomic) long long origin;
@property (readonly, copy, nonatomic) NSString *originBundleId;
@property (readonly, copy, nonatomic) NSString *originAnchorType;
@property (readonly, copy, nonatomic) NSString *userModeName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) char shouldSuggestTriggers;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) NSString *localizedSuggestionReason;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBiomeInferredModeEvent:(id)a0;
- (id)_anchorSuggestionReasonLocalizationKey;
- (id)_heuristicSuggestionReasonLocalizationKey;
- (id)_suggestionReasonLocalizationKey;
- (id)initWithBMInferredModeEvent:(id)a0;
- (id)initWithModeUUID:(id)a0 userModeName:(id)a1 activityType:(unsigned long long)a2 origin:(long long)a3 originBundleId:(id)a4 originAnchorType:(id)a5 allowsSmartEntry:(char)a6 suggestionUUID:(id)a7 triggers:(id)a8 location:(unsigned long long)a9 shouldSuggestTriggers:(char)a10;
- (char)isEqualToATXActivity:(id)a0;

@end
