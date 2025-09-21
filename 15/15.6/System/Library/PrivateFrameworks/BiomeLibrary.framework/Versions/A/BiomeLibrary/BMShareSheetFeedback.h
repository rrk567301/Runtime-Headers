@class NSString, NSData, NSArray;

@interface BMShareSheetFeedback : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *derivedIntentIdentifier;
@property (readonly, nonatomic) NSString *targetBundleID;
@property (readonly, nonatomic) NSString *extensionContextUUID;
@property (readonly, nonatomic) NSData *attachments;
@property (readonly, nonatomic) NSArray *locationUUIDs;
@property (readonly, nonatomic) NSArray *photoSuggestedContacts;
@property (readonly, nonatomic) NSData *modelSuggestionProxies;
@property (readonly, nonatomic) NSString *adaptedModelRecipeID;
@property (readonly, nonatomic) char isAdaptedModelUsed;
@property (nonatomic) char hasIsAdaptedModelUsed;
@property (readonly, nonatomic) char isAdaptedModelCreated;
@property (nonatomic) char hasIsAdaptedModelCreated;
@property (readonly, nonatomic) NSString *supportedBundleIDs;
@property (readonly, nonatomic) int peopleSuggestionsDisabled;
@property (nonatomic) char hasPeopleSuggestionsDisabled;
@property (readonly, nonatomic) NSString *reasonType;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *transportBundleID;
@property (readonly, nonatomic) double numberOfVisibleSuggestions;
@property (nonatomic) char hasNumberOfVisibleSuggestions;
@property (readonly, nonatomic) NSString *trackingID;
@property (readonly, nonatomic) char iCloudFamilyInvocation;
@property (nonatomic) char hasICloudFamilyInvocation;
@property (readonly, nonatomic) int engagementType;
@property (readonly, nonatomic) int indexSelected;
@property (nonatomic) char hasIndexSelected;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithDerivedIntentIdentifier:(id)a0 targetBundleID:(id)a1 extensionContextUUID:(id)a2 attachments:(id)a3 locationUUIDs:(id)a4 photoSuggestedContacts:(id)a5 modelSuggestionProxies:(id)a6 adaptedModelRecipeID:(id)a7 isAdaptedModelUsed:(id)a8 isAdaptedModelCreated:(id)a9 supportedBundleIDs:(id)a10 peopleSuggestionsDisabled:(id)a11 reasonType:(id)a12 reason:(id)a13 sourceBundleID:(id)a14 transportBundleID:(id)a15 numberOfVisibleSuggestions:(id)a16 trackingID:(id)a17 iCloudFamilyInvocation:(id)a18 engagementType:(int)a19 indexSelected:(id)a20;
- (id)initByReadFrom:(id)a0;
- (id)_locationUUIDsJSONArray;
- (id)_photoSuggestedContactsJSONArray;

@end
