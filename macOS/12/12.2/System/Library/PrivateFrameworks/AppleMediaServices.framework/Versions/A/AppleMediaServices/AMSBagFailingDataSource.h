@class NSString, AMSBagKeySet, NSError, NSDate, AMSProcessInfo;

@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain) AMSBagKeySet *bagKeySet;
@property double delay;
@property (retain) NSError *error;
@property (copy) NSString *profile;
@property (copy) NSString *profileVersion;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (retain) NSString *descriptionExtended;
@property (copy) id /* block */ dataSourceChangedHandler;
@property (copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)bagKeyInfoForKey:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 error:(id)a2 delay:(double)a3 bagKeySet:(id)a4;

@end
