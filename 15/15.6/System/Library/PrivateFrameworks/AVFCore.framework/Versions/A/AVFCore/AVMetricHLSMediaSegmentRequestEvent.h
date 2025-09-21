@class NSURL, NSString, AVMetricMediaResourceRequestEvent;

@interface AVMetricHLSMediaSegmentRequestEvent : AVMetricEvent {
    NSURL *_indexFileURL;
    struct _NSRange { unsigned long long location; unsigned long long length; } _byteRange;
    char _isMapSegment;
    NSString *_mediaType;
    AVMetricMediaResourceRequestEvent *_mediaResourceRequestEvent;
}

@property (readonly) NSURL *url;
@property (readonly) char isMapSegment;
@property (readonly) NSString *mediaType;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } byteRange;
@property (readonly) NSURL *indexFileURL;
@property (readonly) AVMetricMediaResourceRequestEvent *mediaResourceRequestEvent;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 indexFileURL:(id)a3 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 isMapSegment:(char)a5 mediaType:(id)a6 mediaResourceRequestEvent:(id)a7;

@end
