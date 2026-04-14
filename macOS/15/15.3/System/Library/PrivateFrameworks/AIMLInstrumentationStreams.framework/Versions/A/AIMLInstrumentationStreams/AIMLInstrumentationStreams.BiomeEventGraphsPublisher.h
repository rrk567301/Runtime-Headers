@class NSArray;

@interface AIMLInstrumentationStreams.BiomeEventGraphsPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ windowLength;
    void /* unknown type, empty encoding */ mergedStream;
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
