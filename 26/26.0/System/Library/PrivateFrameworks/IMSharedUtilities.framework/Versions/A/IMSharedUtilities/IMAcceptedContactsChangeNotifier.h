@interface IMAcceptedContactsChangeNotifier : NSObject

@property (readonly, nonatomic) struct __CFString { } *notification;
@property (readonly, copy, nonatomic) id /* block */ notifyBlock;

+ (id)notifierWithBlock:(id /* block */)a0;

- (void)startObserving;
- (void)stopObserving;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_notifyObserver;
- (id)initWithNotification:(struct __CFString { } *)a0 block:(id /* block */)a1;

@end
