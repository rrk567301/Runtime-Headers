@class NSCursor;

@interface DGBrushCursorCacheItem : NSObject {
    NSCursor *_cursor;
    float _radius;
    float _softness;
    char _showSoftness;
    int _style;
    float _scale;
}

+ (id)cacheItemWithCursor:(id)a0 radius:(float)a1 softness:(float)a2 showSoftness:(char)a3 style:(int)a4 scale:(float)a5;

- (void)dealloc;
- (int)style;
- (float)scale;
- (id)cursor;
- (float)radius;
- (float)softness;
- (char)showSoftness;

@end
