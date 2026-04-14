@class NSString;

@interface FileProviderDaemon.FPFSServicerExtender : NSObject <FPDLifetimeExtender> {
    void /* unknown type, empty encoding */ request;
}

@property (nonatomic, readonly) int requestEffectivePID;
@property (nonatomic, readonly) NSString *prettyDescription;

- (void).cxx_destruct;
- (id)init;

@end
