@class NSString;

@interface TCTextCompositionAssistantReplyOptions : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) unsigned long long maximumReplyCount;
@property (readonly, nonatomic) unsigned long long pid;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL isPrecomputationRequest;
@property (readonly, nonatomic) BOOL respondOnlyIfCached;
@property (readonly, nonatomic) BOOL textAutocapitalizationOn;
@property (readonly, copy) NSString *userPreferredLanguage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
