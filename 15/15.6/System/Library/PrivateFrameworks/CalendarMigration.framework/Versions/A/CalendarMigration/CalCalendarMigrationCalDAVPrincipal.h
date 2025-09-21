@class NSString, NSArray, NSURL, NSDictionary;

@interface CalCalendarMigrationCalDAVPrincipal : NSObject <CalCalendarMigrationPrincipal>

@property (readonly, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *ownerUid;
@property (retain, nonatomic) NSURL *principalURL;
@property (readonly, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *homePushKey;
@property (retain, nonatomic) NSString *homePath;
@property (retain, nonatomic) NSString *defaultCalendarPath;
@property (retain, nonatomic) NSString *inboxPath;
@property (retain, nonatomic) NSString *outboxPath;
@property (retain, nonatomic) NSString *notificationCollectionPath;
@property (nonatomic, getter=isWritable) char writable;
@property (nonatomic, getter=isDelegate) char delegate;
@property (nonatomic, getter=isExpandPropertyReportSupported) char expandPropertyReportSupported;
@property (retain, nonatomic) NSArray *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSString *login;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)addressIsAccountOwner:(id)a0;
- (id)initWithUid:(id)a0;
- (char)addressURLIsAccountOwner:(id)a0;
- (id)_absoluteURLStringWithBaseComponents:(id)a0 andPath:(id)a1;
- (char)_anyCalendarUserAddressIsEquivalentToURL:(id)a0;
- (id)_packedPreferredCalendarUserAddresses;
- (id)dictionaryForAccountProperties;

@end
