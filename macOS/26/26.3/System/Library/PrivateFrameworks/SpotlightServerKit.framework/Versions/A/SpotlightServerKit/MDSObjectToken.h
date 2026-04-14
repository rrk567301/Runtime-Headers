@class NSObject;
@protocol OS_dispatch_queue;

@interface MDSObjectToken : MDSToken {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (unsigned int)machPort;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
