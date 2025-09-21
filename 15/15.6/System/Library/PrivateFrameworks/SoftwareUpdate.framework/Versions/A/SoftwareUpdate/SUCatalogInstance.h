@class NSString;

@interface SUCatalogInstance : NSObject

@property (readonly) NSString *catalogURL;
@property (readonly) NSString *catalogName;
@property (readonly) long long scanInterval;
@property (readonly) long long stagingDelay;
@property (readonly) char predicateScanOnly;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
