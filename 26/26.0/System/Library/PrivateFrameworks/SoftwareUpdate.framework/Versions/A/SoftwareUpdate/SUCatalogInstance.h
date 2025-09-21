@class NSString;

@interface SUCatalogInstance : NSObject

@property (readonly) NSString *catalogURL;
@property (readonly) NSString *catalogName;
@property (readonly) long long scanInterval;
@property (readonly) long long stagingDelay;
@property (readonly) BOOL predicateScanOnly;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
