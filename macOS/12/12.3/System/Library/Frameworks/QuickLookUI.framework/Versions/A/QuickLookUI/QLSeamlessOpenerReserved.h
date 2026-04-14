@class NSString, NSArray, NSAppleEventDescriptor, NSImage, NSWindow;
@protocol QLSeamlessOpenerDelegate, QLSeamlessCloserDelegate;

@interface QLSeamlessOpenerReserved : NSObject {
    id<QLSeamlessOpenerDelegate> delegate;
    id<QLSeamlessCloserDelegate> closerDelegate;
    struct LSApplicationParameters_V1 { long long version; unsigned int flags; struct FSRef *application; void *asyncLaunchRefCon; struct __CFDictionary *environment; struct __CFArray *argv; struct AEDesc *initialEvent; struct __CFArray *architectures; struct __CFURL *applicationURL; struct ProcessSerialNumber *applicationPSN; } parameters;
    NSAppleEventDescriptor *additionalEventParamDescriptor;
    NSString *searchString;
    NSArray *additionalAnimatingItems;
    NSImage *transientImage;
    NSWindow *transientWindow;
    long long transientRetainCount;
    BOOL transientShouldAnimate;
}

- (void)finalize;
- (void)dealloc;

@end
