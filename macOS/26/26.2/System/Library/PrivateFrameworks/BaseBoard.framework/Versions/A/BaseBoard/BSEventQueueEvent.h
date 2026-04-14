@class NSString;

@interface BSEventQueueEvent : NSObject {
    id /* block */ _handler;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)eventWithName:(id)a0 handler:(id /* block */)a1;

- (void)execute;
- (void).cxx_destruct;
- (id)description;

@end
