@class NSString;

@interface CADisplayModeCriteria : NSObject {
    struct CADisplayModeCriteriaPriv { struct CGSize { double x0; double x1; } x0; double x1; int x2; BOOL x3; } *_priv;
}

@property struct CGSize { double x0; double x1; } resolution;
@property double refreshRate;
@property (copy) NSString *hdrMode;
@property BOOL disableFrameDoubling;

- (void)dealloc;
- (id)init;

@end
