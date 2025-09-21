@class NSString;

@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>

@property (readonly) char isSafariSyncEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_primaryAppleAccountSecurityLevel;
- (long long)appleAccountSecurityState;
- (void)getAppleAccountSecurityStateWithCompletion:(id /* block */)a0;

@end
