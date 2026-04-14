@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    BOOL _shouldSendOrder;
}

@property (nonatomic) int overwrite;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *priorOrderedURL;

+ (id)stringFromOverwriteValue:(int)a0;

- (id)additionalHeaderValues;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 andOverwrite:(int)a2;

@end
