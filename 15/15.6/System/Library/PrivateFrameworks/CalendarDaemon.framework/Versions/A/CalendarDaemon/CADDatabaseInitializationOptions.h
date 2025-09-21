@class NSArray, CADMockPermissionValidator, NSURL, CADChangeTrackingClientId, NSObject, ClientIdentity;
@protocol CalCalendarDataContainerProvider, OS_tcc_identity;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) char enablePropertyModificationLogging;
@property (retain, nonatomic) NSURL *databaseDirectory;
@property (retain, nonatomic) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;
@property (nonatomic) char unitTesting;
@property (nonatomic) char allowDelegateSources;
@property (nonatomic) char allowIntegrations;
@property (retain, nonatomic) NSArray *allowedSourceIdentifiers;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *privacyClientIdentity;
@property (retain, nonatomic) CADMockPermissionValidator *mockPermissions;
@property (retain, nonatomic) ClientIdentity *remoteClientIdentity;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToOptions:(id)a0;
- (void)purifyOptions;
- (id)validOptionsForConnection:(id)a0;

@end
