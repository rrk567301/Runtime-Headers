@class QLThumbnailGenerationRequest, QLThumbnailRepresentation, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface QLThumbnailRequestOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    NSDate *_beginDate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue;
@property (retain) QLThumbnailGenerationRequest *request;
@property (copy, nonatomic) id /* block */ thumbnailRequestGenerationWillStartBlock;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (retain, nonatomic) NSError *thumbnailRequestInvalidError;
@property (copy, nonatomic) id /* block */ requestUpdateBlock;
@property (copy, nonatomic) id /* block */ requestCompletionBlock;
@property (nonatomic) double minimumDimension;
@property (nonatomic) unsigned long long requestedTypes;

+ (id)operationWithThumbnailRequest:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)main;
- (void)setFinished:(BOOL)a0;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (void)setExecuting:(BOOL)a0;
- (void)_finishWithError:(id)a0;
- (void)setWantsBaseline:(BOOL)a0;
- (void)setGenerationBehavior:(long long)a0;
- (unsigned long long)badgeType;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(BOOL)a4;
- (id)initWithThumbnailRequest:(id)a0;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3;
- (id)sharedSerialResponseQueue;
- (BOOL)wantsBaseline;
- (long long)generationBehavior;
- (void)setBadgeType:(unsigned long long)a0;
- (void)__finishWithError:(id)a0;
- (BOOL)_finishIfNeeded;
- (void)_finish;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)_finishIfRequestIsInvalid;

@end
