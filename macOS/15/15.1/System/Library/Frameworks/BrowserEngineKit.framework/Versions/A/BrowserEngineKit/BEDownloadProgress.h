@interface BEDownloadProgress : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ downloadDescription;
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ sourceDescription;
    void /* unknown type, empty encoding */ destinationURL;
    void /* unknown type, empty encoding */ progress;
}

- (id)init;
- (void).cxx_destruct;
- (void)publish;
- (void)cancel;
- (void)unpublish;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 title:(id)a2 type:(id)a3 description:(id)a4 sourceDescription:(id)a5 cancellationHandler:(id /* block */)a6;
- (void)updateProgressWithBytesReceived:(long long)a0 bytesTotal:(long long)a1;

@end
