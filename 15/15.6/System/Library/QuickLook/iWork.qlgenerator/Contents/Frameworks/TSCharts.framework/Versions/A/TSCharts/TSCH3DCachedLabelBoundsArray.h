@class NSMutableArray;

@interface TSCH3DCachedLabelBoundsArray : NSObject {
    NSMutableArray *_elements;
}

@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } offset;

- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id).cxx_construct;
- (void)clear;
- (void)addLabelBounds:(id)a0;
- (void)enumerateLabelBoundsUsingBlock:(id /* block */)a0;

@end
