@class _TtC12VisualLookUp35VisualIntelligenceServiceCompatible;

@interface VIStreamingSession : NSObject {
    _TtC12VisualLookUp35VisualIntelligenceServiceCompatible *_compatService;
}

- (id)init;
- (void).cxx_destruct;
- (id)extractSignalsWithRequest:(id)a0 error:(id *)a1;
- (id)initWithCompatService:(id)a0;
- (id)parseWithRequest:(id)a0 error:(id *)a1;

@end
