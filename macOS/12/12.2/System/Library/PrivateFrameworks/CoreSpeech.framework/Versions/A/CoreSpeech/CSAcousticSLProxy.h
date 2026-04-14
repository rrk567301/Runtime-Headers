@protocol CSAcousticSLProxyDelegate;

@interface CSAcousticSLProxy : NSObject

@property (weak, nonatomic) id<CSAcousticSLProxyDelegate> delegate;

- (void).cxx_destruct;
- (void)setAsset:(id)a0;
- (void)setAsset:(id)a0 forTask:(id)a1;
- (void)startRequestWithContext:(id)a0 withVtei:(id)a1 completion:(id /* block */)a2;
- (void)addAudio:(id)a0;
- (void)stopRequest;
- (void)getLatestAcousticSLResult:(id /* block */)a0;

@end
