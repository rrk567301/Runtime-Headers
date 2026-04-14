@class _TtC12SmartReplies21SRSmartRepliesManager;

@interface SmartReplies.SRSmartRepliesManager : NSObject {
    void /* unknown type, empty encoding */ actionMetadataController;
    void /* unknown type, empty encoding */ biomeManager;
    void /* unknown type, empty encoding */ modelResponseManager;
    void /* unknown type, empty encoding */ rkManager;
    void /* unknown type, empty encoding */ metricsRecorder;
}

@property (class, nonatomic, readonly) _TtC12SmartReplies21SRSmartRepliesManager *shared;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionsFor:(id)a0;
- (void)registerResponseDisplayedAtIndex:(id)a0 displaySetting:(id)a1;
- (void)registerResponseFor:(id)a0 message:(id)a1 time:(id)a2 metadata:(id)a3 language:(id)a4;
- (void)suggestionsFor:(id)a0 completion:(id /* block */)a1;

@end
