@class NSMutableDictionary, NSXPCConnection, NSHashTable, NSOperationQueue, NSString;
@protocol PHProjectTypeDescriptionSourceXPCService;

@interface PHProjectTypeDescriptionSourceClient : NSObject <PHProjectTypeDescriptionSourceXPCClient>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<PHProjectTypeDescriptionSourceXPCService> service;
@property (readonly, nonatomic) NSHashTable *invalidationObservers;
@property (readonly, nonatomic) NSOperationQueue *observerQueue;
@property (readonly, nonatomic) NSMutableDictionary *projectTypeDescriptionInvalidationDates;
@property (copy) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateConnection;
- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addInvalidationObserver:(id)a0;
- (void)invalidateFooterTextForSubtypesOfProjectType:(id)a0;
- (void)invalidateTypeDescriptionForProjectType:(id)a0;
- (BOOL)isProjectTypeDescriptionOutdated:(id)a0;
- (void)removeInvalidationObserver:(id)a0;
- (void)requestFooterTextForProjectTypeLevel:(id)a0 reply:(id /* block */)a1;
- (void)requestSubtypesForProjectType:(id)a0 reply:(id /* block */)a1;
- (void)requestTypeDescriptionForProjectType:(id)a0 reply:(id /* block */)a1;

@end
