@class NSUUID, NSString, NSArray, NSError, NSExtension, NSOperationQueue, INWatchdogTimer, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject {
    NSUUID *_requestIdentifier;
    INWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
}

@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension;
@property (retain, nonatomic, setter=_setError:) NSError *_error;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *extensionInputItems;
@property (nonatomic) BOOL requiresTCC;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)reset;
- (id)_requestOperationQueue;
- (void)_resetExtensionContextHostWithCompletion:(id /* block */)a0;
- (id)_extensionContextHost;
- (void)_scheduleContextTimer;
- (void)_resetContextTimer;
- (void)startRequestForIntent:(id)a0 completion:(id /* block */)a1;

@end
