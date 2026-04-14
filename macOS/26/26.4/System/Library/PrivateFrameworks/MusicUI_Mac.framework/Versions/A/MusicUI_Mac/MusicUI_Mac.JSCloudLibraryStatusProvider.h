@class JSValue;

@interface MusicUI_Mac.JSCloudLibraryStatusProvider : NSObject <MusicUI_Mac.JSCloudLibraryStatusProviderExports> {
    void /* unknown type, empty encoding */ _isCloudLibraryEnabled;
    void /* unknown type, empty encoding */ _isCloudLibraryLoaded;
    void /* unknown type, empty encoding */ cloudLibraryStatusController;
}

@property (nonatomic, retain) JSValue *isCloudLibraryEnabled;
@property (nonatomic, retain) JSValue *isCloudLibraryLoaded;

- (void).cxx_destruct;
- (id)init;

@end
