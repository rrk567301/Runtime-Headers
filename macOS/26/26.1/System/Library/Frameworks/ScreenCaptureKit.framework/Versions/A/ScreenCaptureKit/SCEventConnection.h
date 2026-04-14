@class NSObject;
@protocol OS_dispatch_source;

@interface SCEventConnection : NSObject

@property unsigned int connection;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ handler;

- (void)activate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
