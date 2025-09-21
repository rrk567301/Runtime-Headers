@class NSString, _ASWebsiteNameProvider, WBSPasswordManagerWebsiteMetadataEntry, NSObject;
@protocol OS_dispatch_queue;

@interface _ASWebsiteNameFetchOperation : NSOperation {
    struct { char isCancelled; char isExecuting; char isFinished; } _state;
    NSObject<OS_dispatch_queue> *_queue;
    _ASWebsiteNameProvider *_provider;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) WBSPasswordManagerWebsiteMetadataEntry *metadataEntry;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isCancelled;
- (char)isExecuting;
- (char)isFinished;
- (void)_run;
- (void)_finish;
- (id)initWithDomain:(id)a0 metadataEntry:(id)a1 provider:(id)a2;

@end
