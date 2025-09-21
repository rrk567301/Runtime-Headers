@class NSString;

@interface BMTextUnderstandingPoemAnalyticsFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) long long numOfFacesInMessages;
@property (nonatomic) char hasNumOfFacesInMessages;
@property (readonly, nonatomic) long long numOfFacesOnDevice;
@property (nonatomic) char hasNumOfFacesOnDevice;
@property (readonly, nonatomic) long long numOfNamedFacesOnDevice;
@property (nonatomic) char hasNumOfNamedFacesOnDevice;
@property (readonly, nonatomic) long long numOfConversationThreads;
@property (nonatomic) char hasNumOfConversationThreads;
@property (readonly, nonatomic) long long numOfNamedEntityMentions;
@property (nonatomic) char hasNumOfNamedEntityMentions;
@property (readonly, nonatomic) long long numOfSenderMentions;
@property (nonatomic) char hasNumOfSenderMentions;
@property (readonly, nonatomic) long long numOfReceiverMentions;
@property (nonatomic) char hasNumOfReceiverMentions;
@property (readonly, nonatomic) long long numOfPronounMentions;
@property (nonatomic) char hasNumOfPronounMentions;
@property (readonly, nonatomic) long long numOfImagesShared;
@property (nonatomic) char hasNumOfImagesShared;
@property (readonly, nonatomic) long long numOfLinguisticMentions;
@property (nonatomic) char hasNumOfLinguisticMentions;
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
- (id)initWithNumOfFacesInMessages:(id)a0 numOfFacesOnDevice:(id)a1 numOfNamedFacesOnDevice:(id)a2 numOfConversationThreads:(id)a3 numOfNamedEntityMentions:(id)a4 numOfSenderMentions:(id)a5 numOfReceiverMentions:(id)a6 numOfPronounMentions:(id)a7 numOfImagesShared:(id)a8 numOfLinguisticMentions:(id)a9;

@end
