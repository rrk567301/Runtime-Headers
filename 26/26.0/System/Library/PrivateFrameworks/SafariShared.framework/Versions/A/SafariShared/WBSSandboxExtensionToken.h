@class NSSet, NSArray, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSandboxExtensionToken : NSObject <WBSSandboxExtensionToken> {
    NSArray *_extensions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, copy, nonatomic) NSSet *urls;
@property (readonly, nonatomic) BOOL stopAccessingRequestURLWhenDone;
@property (readonly, nonatomic) NSURL *shortestAccessibleURL;

- (BOOL)isValid;
- (void)dealloc;
- (void)invalidate;
- (id)copy;
- (void).cxx_destruct;
- (id)_consumeAllExtensionsOrNone:(id)a0 error:(id *)a1;
- (id)initWithExtensions:(id)a0 requestURL:(id)a1 stopAccessingRequestURLWhenDone:(BOOL)a2 queue:(id)a3 error:(id *)a4;

@end
