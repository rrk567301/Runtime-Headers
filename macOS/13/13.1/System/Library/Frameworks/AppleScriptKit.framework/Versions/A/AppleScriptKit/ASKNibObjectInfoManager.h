@class NSString, NSMutableArray;

@interface ASKNibObjectInfoManager : NSObject {
    NSString *_bundleIdentifier;
    NSMutableArray *_connectors;
}

+ (void)initialize;
+ (id)eventHandlersToProcess;
+ (void)addEventHandlerToProcess:(id)a0;
+ (void)processEventHandlers;
+ (void)enableEventHandlerProcessing;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)a0;
- (void)awakeFromNib;
- (void)_finishLaunching:(id)a0;
- (void)_pluginObjectLoaded:(id)a0;
- (id)_eventHandlerWithName:(id)a0;
- (id)connectors;
- (void)setConnectors:(id)a0;
- (void)addConnector:(id)a0;
- (void)removeConnector:(id)a0;
- (unsigned long long)indexOfConnector:(id)a0;

@end
