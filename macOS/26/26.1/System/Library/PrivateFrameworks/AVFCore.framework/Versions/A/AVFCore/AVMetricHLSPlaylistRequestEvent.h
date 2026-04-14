@class NSURL, NSString, AVMetricMediaResourceRequestEvent;

@interface AVMetricHLSPlaylistRequestEvent : AVMetricEvent {
    NSURL *_url;
    BOOL _isMultivariantPlaylist;
    NSString *_mediaType;
    AVMetricMediaResourceRequestEvent *_mediaResourceRequestEvent;
}

@property (readonly) NSURL *url;
@property (readonly) BOOL isMultivariantPlaylist;
@property (readonly) NSString *mediaType;
@property (readonly) AVMetricMediaResourceRequestEvent *mediaResourceRequestEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 url:(id)a3 isMultivariantPlaylist:(BOOL)a4 mediaType:(id)a5 mediaResourceRequestEvent:(id)a6;

@end
