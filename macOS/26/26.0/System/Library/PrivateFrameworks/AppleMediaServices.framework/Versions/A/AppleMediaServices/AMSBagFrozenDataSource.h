@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *data;
@property (readonly) NSDictionary *defaultValues;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) NSString *bagLoadingPartialIdentifier;
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
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)loadWithCompletion:(id /* block */)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)valueForURLVariable:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (id)_initWithProfile:(id)a0 profileVersion:(id)a1 data:(id)a2 expirationDate:(id)a3 processInfo:(id)a4 defaultValues:(id)a5;
- (void).cxx_destruct;
- (id)defaultValueForKey:(id)a0;

@end
