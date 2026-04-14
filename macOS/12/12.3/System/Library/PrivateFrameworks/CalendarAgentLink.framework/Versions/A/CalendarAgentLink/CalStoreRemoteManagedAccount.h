@class NSString, NSURL, CalStoreRemoteManagedPrincipal;

@interface CalStoreRemoteManagedAccount : CalStoreRemoteManagedObject

@property (retain, nonatomic) NSString *acAccountID;
@property (retain, nonatomic) NSString *accountPluginID;
@property (nonatomic) BOOL isEnabledForCalendar;
@property (nonatomic) BOOL isEnabledForReminders;
@property (nonatomic) BOOL isMarkedForDeletion;
@property (retain, nonatomic) NSString *login;
@property (readonly, nonatomic) CalStoreRemoteManagedPrincipal *mainPrincipal;
@property (retain, nonatomic) NSURL *serverURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
