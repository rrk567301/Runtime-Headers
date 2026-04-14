@class SKAISSetupReport, AISSetupController, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface SKAISSetupController : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AISSetupController *_underlyingObject;
}

@property (nonatomic) double mockDelay;
@property (retain, nonatomic) NSError *mockError;
@property (retain, nonatomic) SKAISSetupReport *mockReport;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setupWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
