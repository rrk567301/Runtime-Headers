@class VSOptional, NSURLSessionTask, NSItemProvider, VSAuditToken;

@interface VSImageLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic, getter=isNonAppInitiated) char nonAppInitiated;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredImageSize;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_beginFetchingDataFromURL:(id)a0;
- (void)_finishWithImageData:(id)a0 orError:(id)a1;
- (id)initWithItemProvider:(id)a0 preferredImageSize:(struct CGSize { double x0; double x1; })a1;

@end
