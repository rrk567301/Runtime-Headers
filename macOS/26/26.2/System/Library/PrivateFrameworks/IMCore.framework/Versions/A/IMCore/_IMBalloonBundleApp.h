@interface _IMBalloonBundleApp : IMBalloonApp {
    long long _pluginLoadToken;
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadBundle;
- (Class)dataSourceClass;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (long long)pluginLoadToken;
- (void)setBubbleClass:(Class)a0;
- (void)_loadAppBundle;
- (Class)browserClass;
- (Class)bubbleClass;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (double)presentationDelay;
- (void)setBrowserClass:(Class)a0;
- (void)setDataSourceClass:(Class)a0;
- (void)setPluginLoadToken:(long long)a0;
- (BOOL)shouldDelayViewControllerPresentation;
- (BOOL)shouldForceIntoSendMenu;

@end
