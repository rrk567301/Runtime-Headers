@interface ULObserverRecord : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) const void *observer;

- (void).cxx_destruct;

@end
