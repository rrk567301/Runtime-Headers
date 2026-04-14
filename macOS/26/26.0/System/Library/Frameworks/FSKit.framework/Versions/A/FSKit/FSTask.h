@class NSUUID, FSMessageConnection;

@interface FSTask : NSObject <NSSecureCoding, FSTaskMessageOperations>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *taskID;
@property (readonly) FSMessageConnection *connection;
@property (readonly) BOOL hasCancellationHandler;
@property (readonly) FSMessageConnection *connection;
@property (readonly) NSUUID *taskID;
@property (copy) id /* block */ cancellationHandler;

- (void)logMessage:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)didCompleteWithError:(id)a0;
- (id)initWithMessageConnection:(id)a0 taskID:(id)a1;
- (id)localizedMessage:(id)a0 table:(id)a1 bundle:(id)a2 arguments:(char *)a3;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;

@end
