@class NSArray, NSURL, UTType;

@interface SCScreenshotConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configLock;
}

@property (class, readonly) NSArray *supportedContentTypes;

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL showsCursor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) BOOL ignoreShadows;
@property (nonatomic) BOOL ignoreClipping;
@property (nonatomic) BOOL includeChildWindows;
@property (nonatomic) long long displayIntent;
@property (nonatomic) long long dynamicRange;
@property (nonatomic) UTType *contentType;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)supportedContentTypes;

- (id)init;
- (void).cxx_destruct;

@end
