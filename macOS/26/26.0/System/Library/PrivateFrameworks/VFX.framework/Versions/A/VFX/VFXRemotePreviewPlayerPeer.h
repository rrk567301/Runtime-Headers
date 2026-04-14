@class NSURL, NSString;

@interface VFXRemotePreviewPlayerPeer : NSObject {
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ browser;
    void /* unknown type, empty encoding */ connection;
}

@property (class, nonatomic, readonly) NSURL *projectFolder;

@property (nonatomic, weak) void /* function */ rendererStatisticsProvider;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)connectToStudio;
- (void)openPackageWithUrl:(id)a0;

@end
