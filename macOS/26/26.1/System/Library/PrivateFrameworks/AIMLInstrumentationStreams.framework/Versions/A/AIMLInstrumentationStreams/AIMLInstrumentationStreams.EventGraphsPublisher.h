@class NSArray;

@interface AIMLInstrumentationStreams.EventGraphsPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ windowLength;
    void /* unknown type, empty encoding */ upstream;
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ trackingTag;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
