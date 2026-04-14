@interface IKImageState : NSObject <NSCoding> {
    void *_privateData;
}

@property int orientationTag;
@property double zoomFactor;

+ (int)rotateRight:(int)a0;
+ (int)rotateLeft:(int)a0;
+ (int)flipHorizontal:(int)a0;
+ (int)flipVertical:(int)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cleanup;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (void)setFilters:(id)a0;
- (id)filters;
- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (void)flipHorizontal;
- (void)flipVertical;
- (void)rotateLeft;
- (void)rotateRight;
- (id)filterArray;
- (struct CGPoint { double x0; double x1; })visibleCenter;
- (void)setVisibleCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)imageStateDescription;
- (id)selectionInfo;
- (void)setSelectionInfo:(id)a0;

@end
