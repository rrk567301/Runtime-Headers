@class NSString, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TRMPortDelegate;

@interface TRMPort : NSObject

@property (nonatomic) unsigned long long registryEntryID;
@property (nonatomic) char isInactive;
@property (retain, nonatomic) NSString *portDescription;
@property (nonatomic) int portType;
@property (retain, nonatomic) NSString *portTypeDescription;
@property (nonatomic) int portNumber;
@property (nonatomic) char builtIn;
@property (nonatomic) char connectionActive;
@property (retain, nonatomic) NSString *connectionUUID;
@property (nonatomic) char authorizationRequired;
@property (nonatomic) char authorizationPending;
@property (nonatomic) char userAuthorizationPending;
@property (retain, nonatomic) NSArray *transportsUnauthorized;
@property (nonatomic) int userAuthorizationStatus;
@property (retain, nonatomic) NSString *userAuthorizationStatusDescription;
@property (nonatomic) unsigned int service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct IONotificationPort { } *ioNotificationPort;
@property (nonatomic) unsigned int ioNotification;
@property (nonatomic) char interestNotificationsStarted;
@property (retain, nonatomic) NSDictionary *servicePropertiesFiltered;
@property (readonly, weak, nonatomic) id<TRMPortDelegate> delegate;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)_handleNotificationForService:(unsigned int)a0 messageType:(unsigned int)a1 messageArgument:(void *)a2;
- (char)_startInterestNotifications;
- (void)_stopInterestNotifications;
- (char)_updatePropertiesFromService;
- (id)initWithService:(unsigned int)a0 andDelegate:(id)a1;
- (void)setUserAuthorizationStatus:(int)a0 completionHandler:(id /* block */)a1;

@end
