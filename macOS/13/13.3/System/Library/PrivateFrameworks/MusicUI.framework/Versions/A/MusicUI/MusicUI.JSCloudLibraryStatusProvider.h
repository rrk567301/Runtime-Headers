@class JSValue;

@interface MusicUI.JSCloudLibraryStatusProvider : NSObject <MusicUI.JSCloudLibraryStatusProviderExports> {
    void /* unknown type, empty encoding */ cloudLibraryStatusController;
    void /* unknown type, empty encoding */ objectGraph;
}

@property (nonatomic, readonly) JSValue *isCloudLibraryEnabled;
@property (nonatomic, readonly) JSValue *isCloudLibraryLoaded;

- (id)init;
- (void).cxx_destruct;

@end
