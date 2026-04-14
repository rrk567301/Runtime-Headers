@interface SpotlightUIShared.FilesZKWFallbackResult : SFSearchResult_SpotlightExtras

@property (nonatomic, readonly) BOOL isMetadataResult;

- (id)initWithResult:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContentType:(id)a0 displayName:(id)a1;
- (id)initWithFastLaunchURL:(id)a0 contentType:(id)a1 displayName:(id)a2;
- (id)initWithQueryTopic:(id)a0;
- (id)initWithSearchResult:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 attributeKeys:(id)a3 attributeValues:(id)a4;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 attributeKeys:(id)a3 attributeValues:(id)a4 type:(int)a5 completion:(id)a6;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 attributes:(id)a3 type:(int)a4 completion:(id)a5;
- (id)initWithLastUsedDate:(id)a0 contentCreationDate:(id)a1;
- (id)initWithResult:(id)a0 groupId:(id)a1;

@end
