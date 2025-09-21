@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadBundle;
- (Class)dataSourceClass;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)setBubbleClass:(Class)a0;
- (void)_loadAppBundle;
- (Class)browserClass;
- (Class)bubbleClass;
- (char)isPreDawnAndAppStoreStickerGenre;
- (char)isStickerPackOnly;
- (double)presentationDelay;
- (void)setBrowserClass:(Class)a0;
- (void)setDataSourceClass:(Class)a0;
- (char)shouldDelayViewControllerPresentation;
- (char)shouldForceIntoSendMenu;

@end
