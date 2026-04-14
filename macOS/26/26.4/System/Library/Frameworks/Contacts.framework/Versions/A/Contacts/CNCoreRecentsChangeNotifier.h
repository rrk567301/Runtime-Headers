@interface CNCoreRecentsChangeNotifier : NSObject

@property (readonly, nonatomic) struct __CFString { } *notification;
@property (readonly, copy, nonatomic) id /* block */ notifyBlock;

+ (id)acceptedIntroductionsNotifierWithBlock:(id /* block */)a0;

- (void)startObserving;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)dealloc;
- (void)_notifyObserver;
- (id)initWithNotification:(struct __CFString { } *)a0 block:(id /* block */)a1;

@end
