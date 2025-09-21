@class NSString, NSURL;

@interface BWDeferredIntermediate : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cv;
    char _prefetching;
    char _dirty;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) NSURL *URL;
@property (nonatomic) long long settingsID;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)flush;
- (id)fetchAndRetain:(int *)a0;
- (id)_shortString;
- (id)archive:(int *)a0;
- (id)initWithTag:(id)a0 URL:(id)a1;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;

@end
