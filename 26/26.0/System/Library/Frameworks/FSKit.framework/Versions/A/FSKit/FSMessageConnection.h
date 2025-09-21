@class NSXPCListenerEndpoint, NSArray, NSXPCConnection, FSMessageReceiver, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface FSMessageConnection : NSObject <NSSecureCoding, FSTaskMessageOperations, FSTaskLocaleOperations>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSLocale *locale;
@property (copy) id /* block */ earlyCompletedBlock;
@property (copy) id /* block */ lateCompletedBlock;
@property (retain) FSMessageReceiver *receiver;
@property (readonly) NSXPCConnection *connection;
@property (copy) id /* block */ earlyCompletedBlock;
@property (copy) id /* block */ lateCompletedBlock;
@property (readonly) NSXPCConnection *connection;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) BOOL hasCompleted;
@property (readonly) NSArray *preferredLanguages;
@property (retain) FSMessageReceiver *receiver;
@property (readonly) NSLocale *locale;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void)logMessage:(id)a0;
- (Class)classForCoder;
- (void)connect:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didStart;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)completedLocked:(id)a0 replyHandler:(id /* block */)a1;
- (void)didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLocalizationSetup:(id /* block */)a0;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 array:(id)a3;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (void)logLocalizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 array:(id)a3;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;

@end
