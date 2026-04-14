@class NSString, NSPort;

@interface CalNamedMutex : NSObject {
    NSPort *_port;
    NSString *_name;
}

- (void)dealloc;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (id)initWithName:(id)a0;
- (BOOL)tryLock;

@end
