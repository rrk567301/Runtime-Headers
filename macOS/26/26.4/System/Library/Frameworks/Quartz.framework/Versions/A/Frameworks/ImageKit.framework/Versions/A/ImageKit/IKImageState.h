@interface IKImageState : NSObject <NSCoding> {
    void *_privateData;
}

@property int orientationTag;
@property double zoomFactor;

+ (int)rotateLeft:(int)a0;
+ (int)rotateRight:(int)a0;
+ (int)flipHorizontal:(int)a0;
+ (int)flipVertical:(int)a0;

- (void)cleanup;
- (void)finalize;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)flipHorizontal;
- (id)filters;
- (void)encodeWithCoder:(id)a0;
- (void)setFilters:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (void)flipVertical;
- (void)dealloc;
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
