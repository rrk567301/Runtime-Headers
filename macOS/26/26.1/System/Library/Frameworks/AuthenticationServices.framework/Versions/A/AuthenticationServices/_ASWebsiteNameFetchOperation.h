@class NSString, _ASWebsiteNameProvider, WBSPasswordManagerWebsiteMetadataEntry, NSObject;
@protocol OS_dispatch_queue;

@interface _ASWebsiteNameFetchOperation : NSOperation {
    struct { BOOL isCancelled; BOOL isExecuting; BOOL isFinished; } _state;
    NSObject<OS_dispatch_queue> *_queue;
    _ASWebsiteNameProvider *_provider;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) WBSPasswordManagerWebsiteMetadataEntry *metadataEntry;

- (void)_finish;
- (BOOL)isExecuting;
- (void)_run;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)initWithDomain:(id)a0 metadataEntry:(id)a1 provider:(id)a2;

@end
