@class NSString, NSDictionary, ACAccount, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *data;
@property (readonly) NSDictionary *defaultValues;
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

@end
