@class NSArray, NSMutableArray, PIESlice;

@interface PIESector : NSObject {
    PIESlice *_slice;
}

@property (readonly) NSArray *slices;
@property (readonly) NSMutableArray *subsectors;
@property (readonly) unsigned long long sliceCount;

- (void)dealloc;
- (id)init;
- (id)initWithSlice:(id)a0;
- (unsigned long long)totalHoleCount;
- (id)allSlicePhotos;

@end
