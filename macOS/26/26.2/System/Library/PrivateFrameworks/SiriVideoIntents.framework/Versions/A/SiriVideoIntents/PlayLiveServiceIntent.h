@class LiveService, NSString, NSArray, NSNumber;

@interface PlayLiveServiceIntent : INIntent

@property (nonatomic, retain) LiveService *liveService;
@property (nonatomic, copy) NSString *serviceNameSearch;
@property (nonatomic, copy) NSArray *localServiceResults;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, copy) NSString *crossDeviceRequestInitiator;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
