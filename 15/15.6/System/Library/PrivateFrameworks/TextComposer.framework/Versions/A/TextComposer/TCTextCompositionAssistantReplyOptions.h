@class NSString, NSArray;

@interface TCTextCompositionAssistantReplyOptions : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) unsigned long long maximumReplyCount;
@property (readonly, nonatomic) unsigned long long pid;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char isPrecomputationRequest;
@property (readonly, nonatomic) char respondOnlyIfCached;
@property (readonly, nonatomic) unsigned long long textAutocapitalizationOn;
@property (readonly) char smartQuotesEnabled;
@property (readonly) char smartDashesEnabled;
@property (readonly, copy) NSArray *userQuotesArray;
@property (readonly, copy) NSString *userPreferredLanguage;
@property (readonly, nonatomic) unsigned long long regionPolicy;
@property (readonly, nonatomic) char isExternalAPICall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
