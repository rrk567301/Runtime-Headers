@class CKContainer, NSString, FCCKPrivateDatabaseSchema;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate>

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
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
- (void).cxx_destruct;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchShouldSecureSubscriptionsForDatabase:(id)a0 completion:(id /* block */)a1;

@end
