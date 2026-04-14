@class NSArray;

@interface AIMLInstrumentationStreams.BiomeEventGraphsPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ windowLength;
    void /* unknown type, empty encoding */ mergedStream;
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ trackingTag;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
