@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap;

- (void)addOperation:(id)a0;
- (void)dealloc;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (id)init;
- (id)_zoneManager;
- (id)_zoneIdentifierForOperation:(id)a0;

@end
