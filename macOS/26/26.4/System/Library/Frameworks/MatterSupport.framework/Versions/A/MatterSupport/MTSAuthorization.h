@class MTSXPCServerProxy;

@interface MTSAuthorization : NSObject

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly, getter=isRestrictedCharacteristicsAccessAllowed) BOOL restrictedCharacteristicsAccessAllowed;

+ (BOOL)isDeveloperModeEnabled;

- (void).cxx_destruct;
- (id)init;
- (BOOL)allowsRestrictedCharacteristicsAccessViaDeveloperModeProfile;
- (BOOL)allowsRestrictedCharacteristicsAccessViaSkipDeveloperModeRestrictionProfile;
- (id)initWithServerProxy:(id)a0;

@end
