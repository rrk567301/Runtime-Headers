@class NSString;

@interface BMSiriPostSiriEngagementFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int taskSuccess;
@property (readonly, nonatomic) char isUserAbandoned;
@property (nonatomic) char hasIsUserAbandoned;
@property (readonly, nonatomic) char isUserCancelled;
@property (nonatomic) char hasIsUserCancelled;
@property (readonly, nonatomic) char isSiriCompleted;
@property (nonatomic) char hasIsSiriCompleted;
@property (readonly, nonatomic) char isPromptInteraction;
@property (nonatomic) char hasIsPromptInteraction;
@property (readonly, nonatomic) char isConfirmInteraction;
@property (nonatomic) char hasIsConfirmInteraction;
@property (readonly, nonatomic) char isDisambiguateInteraction;
@property (nonatomic) char hasIsDisambiguateInteraction;
@property (readonly, nonatomic) char isUnsupportedPromptInteraction;
@property (nonatomic) char hasIsUnsupportedPromptInteraction;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithTaskSuccess:(int)a0 isUserAbandoned:(id)a1 isUserCancelled:(id)a2 isSiriCompleted:(id)a3 isPromptInteraction:(id)a4 isConfirmInteraction:(id)a5 isDisambiguateInteraction:(id)a6 isUnsupportedPromptInteraction:(id)a7;

@end
