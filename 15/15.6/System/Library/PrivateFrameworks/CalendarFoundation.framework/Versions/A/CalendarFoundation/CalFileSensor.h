@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalFileSensor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly, retain, nonatomic) NSString *path;
@property (readonly, nonatomic) char started;
@property (readonly, copy, nonatomic) id /* block */ eventBlock;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithPath:(id)a0 eventBlock:(id /* block */)a1;

@end
