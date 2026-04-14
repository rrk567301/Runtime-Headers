@class NSString, _ASWebsiteNameProvider, WBSPasswordManagerWebsiteMetadataEntry, NSObject;
@protocol OS_dispatch_queue;

@interface _ASWebsiteNameFetchOperation : NSOperation {
    struct { BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
    NSObject<OS_dispatch_queue> *_queue;
    _ASWebsiteNameProvider *_provider;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) WBSPasswordManagerWebsiteMetadataEntry *metadataEntry;

- (BOOL)isAsynchronous;
- (id)debugDescription;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)cancel;
- (void)_run;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)start;
- (void)_finish;
- (id)initWithDomain:(id)a0 metadataEntry:(id)a1 provider:(id)a2;

@end
