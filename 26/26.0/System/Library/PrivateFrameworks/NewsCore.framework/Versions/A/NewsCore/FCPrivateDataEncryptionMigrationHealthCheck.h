@class CKContainer, NSString, FCCKPrivateDatabaseSchema;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate>

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
@property (nonatomic) long long toVersion;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainer *containerWithZoneWidePCS;
@property (retain, nonatomic) CKContainer *secureContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)run;

- (void)run;
- (id)init;
- (void)fetchDesiredVersionForDatabase:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchCleanupToVersionForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;

@end
