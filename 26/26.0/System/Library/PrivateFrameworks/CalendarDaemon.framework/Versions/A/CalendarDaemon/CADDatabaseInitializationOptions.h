@class NSArray, CADMockPermissionValidator, NSURL, CADChangeTrackingClientId, NSObject, ClientIdentity;
@protocol CalCalendarDataContainerProvider, OS_tcc_identity;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) BOOL enablePropertyModificationLogging;
@property (retain, nonatomic) NSURL *databaseDirectory;
@property (retain, nonatomic) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowDelegateSources;
@property (nonatomic) BOOL allowIntegrations;
@property (retain, nonatomic) NSArray *allowedSourceIdentifiers;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *privacyClientIdentity;
@property (retain, nonatomic) CADMockPermissionValidator *mockPermissions;
@property (retain, nonatomic) ClientIdentity *remoteClientIdentity;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)validOptionsForConnection:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)purifyOptions;
- (BOOL)isEqualToOptions:(id)a0;
- (void).cxx_destruct;

@end
