@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadBundle;
- (Class)dataSourceClass;
- (void)setDataSourceClass:(Class)a0;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)setBubbleClass:(Class)a0;
- (void)_loadAppBundle;
- (Class)browserClass;
- (Class)bubbleClass;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (void)setBrowserClass:(Class)a0;

@end
