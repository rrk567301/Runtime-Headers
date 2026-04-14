@class NSArray, NSString;

@interface CRKUserPreferredOrderSCNetworkInterfaceProvider : NSObject <CRKSCNetworkInterfaceProviding> {
    struct __SCPreferences { } *mPreferences;
}

@property (readonly, copy, nonatomic) NSArray *interfaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
