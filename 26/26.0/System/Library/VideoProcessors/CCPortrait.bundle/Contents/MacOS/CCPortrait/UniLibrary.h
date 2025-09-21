@class CoreImageLibrary, FigMetalContext;

@interface UniLibrary : NSObject

@property (retain, nonatomic) FigMetalContext *metalContext;
@property (retain) CoreImageLibrary *coreImageLibrary;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 metalOnly:(BOOL)a1;

@end
