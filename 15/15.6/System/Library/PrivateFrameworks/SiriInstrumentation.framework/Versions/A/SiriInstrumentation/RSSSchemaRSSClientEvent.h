@class RSSSchemaRSSSiriVocabSyncDataDownloadContext, RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted, SISchemaInstrumentationMessage, RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested, RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted, RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived, RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived, RSSSchemaRSSSiriVocabSyncTokenReceived, RSSSchemaRSSClientEventMetadata, NSData, RSSSchemaRSSSiriVocabSyncDataDonationFailed;

@interface RSSSchemaRSSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RSSSchemaRSSClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadContext *syncDataDownloadContext;
@property (nonatomic) char hasSyncDataDownloadContext;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenReceived *syncTokenReceived;
@property (nonatomic) char hasSyncTokenReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived *syncTokenFetchRequestReceived;
@property (nonatomic) char hasSyncTokenFetchRequestReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived *syncDataUpdatedNotificationReceived;
@property (nonatomic) char hasSyncDataUpdatedNotificationReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDonationFailed *syncDataDonationFailed;
@property (nonatomic) char hasSyncDataDonationFailed;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested *companionSyncPluginSyncRequested;
@property (nonatomic) char hasCompanionSyncPluginSyncRequested;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted *companionSyncPluginSyncObjectAcquisitionStarted;
@property (nonatomic) char hasCompanionSyncPluginSyncObjectAcquisitionStarted;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted *companionSyncUploadStarted;
@property (nonatomic) char hasCompanionSyncUploadStarted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteCompanionSyncPluginSyncObjectAcquisitionStarted;
- (void)deleteCompanionSyncPluginSyncRequested;
- (void)deleteCompanionSyncUploadStarted;
- (void)deleteEventMetadata;
- (void)deleteSyncDataDonationFailed;
- (void)deleteSyncDataDownloadContext;
- (void)deleteSyncDataUpdatedNotificationReceived;
- (void)deleteSyncTokenFetchRequestReceived;
- (void)deleteSyncTokenReceived;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
