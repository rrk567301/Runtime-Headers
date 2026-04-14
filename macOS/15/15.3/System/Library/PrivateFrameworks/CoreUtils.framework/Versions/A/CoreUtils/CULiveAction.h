@class NSArray, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CULiveAction : NSObject <CUXPCCodable, CUActivatable>

@property (nonatomic) int alertType;
@property (copy, nonatomic) NSArray *destinationIDs;
@property (nonatomic) BOOL direct;
@property (copy, nonatomic) NSString *originatingHomeKitAccessoryID;
@property (copy, nonatomic) NSURL *soundFileURL;
@property (copy, nonatomic) NSString *speakText;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
