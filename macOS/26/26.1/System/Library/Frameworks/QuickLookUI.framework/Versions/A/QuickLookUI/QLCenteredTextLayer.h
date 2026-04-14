@class NSString, QLTextLayer;

@interface QLCenteredTextLayer : CALayer <CALayerDelegate> {
    QLTextLayer *_textLayer;
}

@property (copy) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayers;
- (void)setContentsScale:(double)a0;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void)set_QLLayerAppearance:(id)a0;

@end
