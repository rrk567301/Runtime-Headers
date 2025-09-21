@interface IKImageState : NSObject <NSCoding> {
    void *_privateData;
}

@property int orientationTag;
@property double zoomFactor;

+ (int)rotateLeft:(int)a0;
+ (int)rotateRight:(int)a0;
+ (int)flipHorizontal:(int)a0;
+ (int)flipVertical:(int)a0;

- (void)finalize;
- (void)cleanup;
- (id)filters;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)flipVertical;
- (void)setFilters:(id)a0;
- (id)init;
- (void)flipHorizontal;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (id)filterArray;
- (id)imageStateDescription;
- (void)rotateLeft;
- (void)rotateRight;
- (id)selectionInfo;
- (void)setSelectionInfo:(id)a0;
- (void)setVisibleCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })visibleCenter;

@end
