@class NSFont;

@interface KHFont : NSObject

@property (retain) NSFont *internalFont;

+ (id)systemFontOfSize:(double)a0;
+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)safelyLoadFontWithName:(id)a0 size:(double)a1;

- (void).cxx_destruct;
- (id)systemFont;

@end
