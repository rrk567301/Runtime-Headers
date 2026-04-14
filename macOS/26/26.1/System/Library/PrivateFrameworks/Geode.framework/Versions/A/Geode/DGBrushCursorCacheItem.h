@class NSCursor;

@interface DGBrushCursorCacheItem : NSObject {
    NSCursor *_cursor;
    float _radius;
    float _softness;
    BOOL _showSoftness;
    int _style;
    float _scale;
}

+ (id)cacheItemWithCursor:(id)a0 radius:(float)a1 softness:(float)a2 showSoftness:(BOOL)a3 style:(int)a4 scale:(float)a5;

- (float)radius;
- (id)cursor;
- (float)scale;
- (int)style;
- (void)dealloc;
- (float)softness;
- (BOOL)showSoftness;

@end
