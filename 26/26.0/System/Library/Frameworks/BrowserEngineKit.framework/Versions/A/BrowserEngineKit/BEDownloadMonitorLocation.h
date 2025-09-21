@class NSURL, NSData;

@interface BEDownloadMonitorLocation : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* function */ bookmarkData;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSData *bookmarkData;

- (id)init;
- (void).cxx_destruct;

@end
