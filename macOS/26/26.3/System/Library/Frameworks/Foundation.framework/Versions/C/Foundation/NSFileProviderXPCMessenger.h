@class NSString, NSFileProviderProxy, NSObject;
@protocol OS_dispatch_queue, NSFileProvider;

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {
    id<NSFileProvider> _fileProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderProxy *_fileProviderProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (oneway void)observePresentationChangeOfKind:(id)a0 forPresenterOfURL:(id)a1 withInfo:(id)a2;
- (void)checkInProviderWithReply:(id /* block */)a0;
- (id)initWithFileProvider:(id)a0 queue:(id)a1;
- (oneway void)cancelProvidingItemAtURL:(id)a0 forClaimWithID:(id)a1;
- (void)dealloc;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (oneway void)observeEndOfWriteAtURL:(id)a0 forClaimWithID:(id)a1 fromProcessWithIdentifier:(int)a2;
- (id)initWithFileProviderProxy:(id)a0;
- (void)_makeProvider:(id)a0 provideItemAtURL:(id)a1 withInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)providePhysicalItemForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)movingItemAtURL:(id)a0 withInfo:(id)a1 fileName:(id)a2 completionHandler:(id /* block */)a3;
- (void)provideItemAtURL:(id)a0 withInfo:(id)a1 completionHandler:(id /* block */)a2;

@end
