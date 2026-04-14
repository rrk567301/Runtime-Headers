@class NSXPCConnection, NSArray, NSXPCListenerEndpoint;

@interface SYBacklinkIndicatorClient : NSObject

@property (class, retain, nonatomic) NSXPCListenerEndpoint *_testingEndpoint;

@property (nonatomic) long long action;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL sentRequest;
@property (copy, nonatomic) NSArray *domainIdentifiers;
@property (copy, nonatomic) NSArray *linkIdentifiers;
@property (nonatomic) unsigned int displayID;
@property (nonatomic) long long corner;

+ (void)hideIndicator;
+ (id)clientWithLinkIdentifiers:(id)a0;
+ (id)clientWithDomainIdentifiers:(id)a0 linkIdentifiers:(id)a1;
+ (void)toggleIndicator;
+ (void)toggleIndicatorWithDisplayID:(unsigned int)a0 corner:(long long)a1;
+ (void)hotCornerExited;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_createConnectionIfNeeded;
- (void)_configureConnectionAndResume;
- (void)_resetConnectionIfNecessary;
- (void)requestIndicatorWithCompletion:(id /* block */)a0;
- (void)_sendIndicatorRequestWithCompletion:(id /* block */)a0;
- (long long)_showIndicatorAction;
- (void)_recordLastShowIndicatorRequestTimestamp;
- (void)_clearLastShowIndicatorRequestTimestamp;
- (BOOL)_shouldSendIndicatorRequest;

@end
