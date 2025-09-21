@interface BMRemoteSQLStoreManager : BMSQLStoreManager

@property (nonatomic) char remoteOnly;

- (id)initWithURL:(id)a0;
- (id)deleteRowsDerivedFromStream:(id)a0 eventIdentifier:(id)a1;
- (char)hasReadWriteAccessToURL:(id)a0;

@end
