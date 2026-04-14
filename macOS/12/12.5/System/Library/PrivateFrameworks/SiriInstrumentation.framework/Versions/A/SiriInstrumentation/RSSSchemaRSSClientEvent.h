@class RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived, RSSSchemaRSSSiriVocabSyncDataDonationFailed, RSSSchemaRSSSiriVocabSyncDataDownloadContext, NSData, RSSSchemaRSSSiriVocabSyncTokenReceived, RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived, RSSSchemaRSSClientEventMetadata;

@interface RSSSchemaRSSClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RSSSchemaRSSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadContext *syncDataDownloadContext;
@property (nonatomic) BOOL hasSyncDataDownloadContext;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenReceived *syncTokenReceived;
@property (nonatomic) BOOL hasSyncTokenReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived *syncTokenFetchRequestReceived;
@property (nonatomic) BOOL hasSyncTokenFetchRequestReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived *syncDataUpdatedNotificationReceived;
@property (nonatomic) BOOL hasSyncDataUpdatedNotificationReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDonationFailed *syncDataDonationFailed;
@property (nonatomic) BOOL hasSyncDataDonationFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (void)deleteEventMetadata;
- (void)deleteSyncDataDownloadContext;
- (void)deleteSyncTokenReceived;
- (void)deleteSyncTokenFetchRequestReceived;
- (void)deleteSyncDataUpdatedNotificationReceived;
- (void)deleteSyncDataDonationFailed;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
