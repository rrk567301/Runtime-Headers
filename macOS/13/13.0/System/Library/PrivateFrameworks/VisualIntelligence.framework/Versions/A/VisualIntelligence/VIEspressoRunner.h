@class NSString, NSArray, NSMutableData, NSObject;
@protocol OS_os_log;

@interface VIEspressoRunner : NSObject {
    struct CGSize { double width; double height; } _expectedInputSize;
    NSObject<OS_os_log> *_log;
    NSString *_imageInputName;
    NSArray *_outputNames;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSMutableData *_outputBuffers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)set:(char *)a0 error:(id *)a1;
- (id)initWithMLNetURL:(id)a0 expectedInputSize:(struct CGSize { double x0; double x1; })a1 imageInputName:(id)a2 outputNames:(id)a3 preferredMetalDevice:(id)a4 usesCPUOnly:(BOOL)a5;
- (id)processFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
