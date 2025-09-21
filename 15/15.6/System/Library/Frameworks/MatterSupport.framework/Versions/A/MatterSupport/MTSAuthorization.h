@class MTSXPCServerProxy;

@interface MTSAuthorization : NSObject

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly, getter=isRestrictedCharacteristicsAccessAllowed) char restrictedCharacteristicsAccessAllowed;

+ (char)isDeveloperModeEnabled;

- (id)init;
- (void).cxx_destruct;
- (char)allowsRestrictedCharacteristicsAccessViaDeveloperModeProfile;
- (char)allowsRestrictedCharacteristicsAccessViaSkipDeveloperModeRestrictionProfile;
- (id)initWithServerProxy:(id)a0;

@end
