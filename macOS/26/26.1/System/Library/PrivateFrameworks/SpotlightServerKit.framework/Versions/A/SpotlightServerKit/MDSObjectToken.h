@class NSObject;
@protocol OS_dispatch_queue;

@interface MDSObjectToken : MDSToken {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (unsigned int)machPort;
- (id)initWithQueue:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
