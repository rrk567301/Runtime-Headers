@class NSString;

@interface DMCBackgroundTask : NSObject {
    void /* function */ name;
    void /* function */ targetDateString;
    void /* function */ completion;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) BOOL active;
@property (nonatomic, copy) NSString *targetDateString;
@property (nonatomic) BOOL firstActionAfterInit;
@property (nonatomic, copy) id /* block */ completion;

+ (double)minimumExtensionInterval;

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)targetDate;
- (void)infuseRequest:(id)a0 interval:(double)a1 tolerance:(double)a2 requirements:(unsigned long long)a3;
- (id)initWithName:(id)a0 queue:(id)a1 launchHandler:(id /* block */)a2;
- (void)submitNewRequestWithInterval:(double)a0 tolerance:(double)a1 requirements:(unsigned long long)a2;
- (void)submitRequestWithInterval:(double)a0 tolerance:(double)a1 requirements:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateExistingRequest:(id)a0 interval:(double)a1 tolerance:(double)a2 requirements:(unsigned long long)a3;

@end
