@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDPDFImageProvider : TSDImageProvider {
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct CGPDFDocument { } *_PDFDocument;
    struct CGSize { double width; double height; } _naturalSize;
    NSObject<OS_dispatch_semaphore> *_flushableContentLock;
    char _hasFlushableContent;
}

@property (readonly, nonatomic) struct CGPDFDocument { } *CGPDFDocument;
@property (readonly, nonatomic) long long pageAngle;

- (void)dealloc;
- (char)isValid;
- (void).cxx_destruct;
- (void)flush;
- (struct CGSize { double x0; double x1; })naturalSize;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)i_commonInit;
- (struct CGPDFDocument { } *)p_load;
- (void)p_loadIfNecessary;
- (unsigned long long)i_flushableMemoryEstimate;
- (char)i_hasFlushableContent;

@end
