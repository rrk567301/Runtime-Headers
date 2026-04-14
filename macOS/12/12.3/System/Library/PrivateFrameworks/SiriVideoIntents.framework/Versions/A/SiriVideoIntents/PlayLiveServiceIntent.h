@class LiveService, NSString;

@interface PlayLiveServiceIntent : INIntent

@property (nonatomic, retain) LiveService *liveService;
@property (nonatomic, copy) NSString *serviceNameSearch;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
