@class NSString, SCRunningApplication;

@interface SCWindow : NSObject {
    unsigned int _windowID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSString *_title;
    long long _windowLayer;
    BOOL _isOnScreen;
}

@property (readonly) unsigned int windowID;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) NSString *title;
@property (readonly) long long windowLayer;
@property (readonly) SCRunningApplication *owningApplication;
@property (readonly, getter=isOnScreen) BOOL onScreen;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (BOOL)isEqualToSCWindow:(id)a0;
- (id)owningAppliation;

@end
