@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadBundle;
- (void)setDataSourceClass:(Class)a0;
- (Class)dataSourceClass;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)_loadAppBundle;
- (Class)bubbleClass;
- (Class)browserClass;
- (void)setBubbleClass:(Class)a0;
- (void)setBrowserClass:(Class)a0;

@end
