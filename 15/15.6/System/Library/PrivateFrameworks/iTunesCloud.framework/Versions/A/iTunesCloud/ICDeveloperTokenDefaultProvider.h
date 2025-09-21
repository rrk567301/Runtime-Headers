@class NSString, NSOperationQueue, NSMutableDictionary;

@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider, NSSecureCoding> {
    NSOperationQueue *_requestOperationQueue;
    NSMutableDictionary *_pendingCompletionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICDeveloperTokenDefaultProvider *sharedProvider;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_fetchDeveloperTokenWithClientInfo:(id)a0;
- (void)fetchDeveloperTokenForClientInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateCachedDeveloperTokenForClientInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
