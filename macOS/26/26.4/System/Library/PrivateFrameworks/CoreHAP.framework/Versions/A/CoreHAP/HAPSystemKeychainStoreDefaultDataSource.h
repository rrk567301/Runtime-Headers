@class NSString;

@interface HAPSystemKeychainStoreDefaultDataSource : HMFObject <HAPSystemKeychainStoreDataSource>

@property (readonly, getter=isHH2KeyRollEnabled) BOOL hh2KeyRollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
