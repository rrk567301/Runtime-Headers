@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject <WKObject> {
    struct ObjectStorage<API::WindowFeatures> { struct type { unsigned char __lx[96]; } data; } _windowFeatures;
}

@property (readonly, nonatomic) char _wantsPopup;
@property (readonly, nonatomic) char _hasAdditionalFeatures;
@property (readonly, nonatomic) NSNumber *_popup;
@property (readonly, nonatomic) NSNumber *_locationBarVisibility;
@property (readonly, nonatomic) NSNumber *_scrollbarsVisibility;
@property (readonly, nonatomic) NSNumber *_fullscreenDisplay;
@property (readonly, nonatomic) NSNumber *_dialogDisplay;
@property (readonly, nonatomic) NSNumber *menuBarVisibility;
@property (readonly, nonatomic) NSNumber *statusBarVisibility;
@property (readonly, nonatomic) NSNumber *toolbarsVisibility;
@property (readonly, nonatomic) NSNumber *allowsResizing;
@property (readonly, nonatomic) NSNumber *x;
@property (readonly, nonatomic) NSNumber *y;
@property (readonly, nonatomic) NSNumber *width;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)accessInstanceVariablesDirectly;

- (void)dealloc;

@end
