@class WebDataSource, NSView;
@protocol WebPluginManualLoader;

@interface WebHTMLRepresentationPrivate : NSObject {
    WebDataSource *dataSource;
    char hasSentResponseToPlugin;
    char includedInWebKitStatistics;
    id<WebPluginManualLoader> manualLoader;
    NSView *pluginView;
}

@end
