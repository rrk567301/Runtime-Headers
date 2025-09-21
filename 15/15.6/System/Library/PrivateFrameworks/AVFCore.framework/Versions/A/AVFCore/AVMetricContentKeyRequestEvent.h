@class AVContentKeySpecifier, NSString, AVMetricMediaResourceRequestEvent;

@interface AVMetricContentKeyRequestEvent : AVMetricEvent {
    AVContentKeySpecifier *_contentKeySpecifier;
    NSString *_mediaType;
    char _isClientInitiated;
    AVMetricMediaResourceRequestEvent *_mediaResourceRequestEvent;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) NSString *mediaType;
@property (readonly) char isClientInitiated;
@property (readonly) AVMetricMediaResourceRequestEvent *mediaResourceRequestEvent;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 contentKeySpecifier:(id)a3 mediaType:(id)a4 isClientInitiated:(char)a5 mediaResourceRequestEvent:(id)a6;

@end
