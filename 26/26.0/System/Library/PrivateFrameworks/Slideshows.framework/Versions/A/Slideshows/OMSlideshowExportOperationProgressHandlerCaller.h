@class OFNSOperation;

@interface OMSlideshowExportOperationProgressHandlerCaller : NSObject {
    OFNSOperation *_operation;
}

- (id)initWithOperation:(id)a0;
- (void)dealloc;
- (void)exportProgress:(id)a0;

@end
