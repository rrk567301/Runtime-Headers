@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPixelBufferOverlay : VCObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    long long _videoActivationTimestamp;
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; unsigned int x2; unsigned char x3; int x4; int x5; struct tagVCOverlaySourceInfo *x6; struct tagVCOverlaySourceInfo *x7; struct tagVCOverlaySourceInfo *x8; } *_audioInfo;
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; unsigned int x2; unsigned char x3; int x4; int x5; struct tagVCOverlaySourceInfo *x6; struct tagVCOverlaySourceInfo *x7; struct tagVCOverlaySourceInfo *x8; } *_videoInfo;
    struct tagVCOverlaySource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; unsigned int x2; unsigned char x3; int x4; int x5; struct tagVCOverlaySourceInfo *x6; struct tagVCOverlaySourceInfo *x7; struct tagVCOverlaySourceInfo *x8; } *_networkInfo;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textFrame;
    struct __CFDictionary { } *_stringAttributes;
    struct __CFString { } *_mutableDisplayText;
    struct CGSize { double width; double height; } _currentVRADimensions;
    int _currentLongestLine;
    double _lastDefaultsReadTime;
    double _lastStringAttributesReadTime;
}

@property struct tagVCPixelBufferOverlayConfig { BOOL attributesHaveChanged; BOOL isLocalVideo; float averageFrameRate; float currentFrameRate; struct tagVCOverlayConfiguration { BOOL isEnabled; unsigned char audioVerbosity; unsigned char videoVerbosity; unsigned char networkVerbosity; int fixedFontSize; } overlayConfig; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentContentsRect; struct CGSize { double width; double height; } currentDimensions; struct __CFDictionary *storedAttributes; int camera; } currentDetails;

- (void)dealloc;
- (id)init;

@end
