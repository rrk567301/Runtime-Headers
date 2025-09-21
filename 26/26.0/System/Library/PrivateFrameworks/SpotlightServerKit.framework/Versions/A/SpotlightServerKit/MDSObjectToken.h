@class NSObject;
@protocol OS_dispatch_queue;

@interface MDSObjectToken : MDSToken {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)description;
- (unsigned int)machPort;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
