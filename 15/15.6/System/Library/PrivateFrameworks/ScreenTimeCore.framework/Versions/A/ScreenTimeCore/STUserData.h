@class NSString;

@interface STUserData : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, nonatomic) char isParent;
@property (readonly, nonatomic) char isRemote;
@property (readonly, nonatomic) char hasPasscode;
@property (readonly, nonatomic) char screenTimeEnabled;
@property (readonly, nonatomic) char syncingEnabled;
@property (readonly, nonatomic) char checkForUnsafePhotos;
@property (readonly, nonatomic) char isCommunicationSafetyNotificationEnabled;
@property (readonly, nonatomic) char isCommunicationSafetyAnalyticsEnabled;
@property (readonly, nonatomic) NSString *familyMemberType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 givenName:(id)a1 isParent:(char)a2 isRemote:(char)a3 hasPasscode:(char)a4 screenTimeEnabled:(char)a5 syncingEnabled:(char)a6 checkForUnsafePhotos:(char)a7 communicationSafetyNotificationEnabled:(char)a8 communicationSafetyAnalyticsEnabled:(char)a9 familyMemberType:(id)a10;

@end
