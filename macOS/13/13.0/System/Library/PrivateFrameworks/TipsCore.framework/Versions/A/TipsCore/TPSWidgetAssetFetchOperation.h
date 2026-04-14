@class NSURL, TPSWidgetController, TPSDocument;

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation

@property (retain, nonatomic) NSURL *lightAssetURL;
@property (retain, nonatomic) NSURL *darkAssetURL;
@property (readonly, weak, nonatomic) TPSWidgetController *widgetController;
@property (readonly, nonatomic) TPSDocument *widgetDocument;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDocument:(id)a0 widgetController:(id)a1;

@end
