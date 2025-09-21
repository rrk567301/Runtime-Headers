@class FPDMoveReader, FPMoveInfo, FPDActionOperationQueue, FPDMoveWriter;

@interface FPDMoveOperation : FPDActionOperation {
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}

@property (readonly, nonatomic) FPMoveInfo *info;

+ (char)_validateInfo:(id)a0;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_t_unblockReader;
- (void)cancelRoot:(id)a0;
- (void)dumpStateTo:(id)a0;
- (id)initWithActionInfo:(id)a0 request:(id)a1 server:(id)a2;
- (id)moveInfo;
- (void)sendPastUpdatesToClient:(id)a0;

@end
