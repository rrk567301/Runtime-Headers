@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ExpertSystemHandlerCore : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSMutableDictionary *_activeTimers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureClass:(id)a0;
+ (id)internalStateDictionary;

- (id)initWithQueue:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (void).cxx_destruct;
- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (void)dealloc;
- (void)cancelAllTimers;
- (void)cancelTimerWithIdentifier:(id)a0;
- (void)scheduleTimerFor:(unsigned long long)a0 leeway:(unsigned long long)a1 identifier:(id)a2 queue:(id)a3 eventHandler:(id /* block */)a4 cancelHandler:(id /* block */)a5;

@end
