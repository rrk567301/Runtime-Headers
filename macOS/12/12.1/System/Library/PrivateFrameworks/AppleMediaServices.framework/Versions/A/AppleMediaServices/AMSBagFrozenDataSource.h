@class NSArray, NSDictionary, AMSBagKeySet, NSDate, AMSProcessInfo, NSString;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSBagKeySet *bagKeySet;
@property (readonly) NSArray *cookies;
@property (readonly) NSDictionary *data;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (retain) NSString *descriptionExtended;
@property (copy) id /* block */ dataSourceChangedHandler;
@property (copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)bagKeyInfoForKey:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)_initWithProfile:(id)a0 profileVersion:(id)a1 data:(id)a2 expirationDate:(id)a3 bagKeySet:(id)a4 cookies:(id)a5 processInfo:(id)a6;

@end
