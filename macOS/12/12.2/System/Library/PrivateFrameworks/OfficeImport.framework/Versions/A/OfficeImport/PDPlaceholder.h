@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isTextType:(int)a0;
+ (BOOL)isNonTextType:(int)a0;

- (int)size;
- (id)description;
- (id)init;
- (int)type;
- (void)setType:(int)a0;
- (void)setSize:(int)a0;
- (void)setOrientation:(int)a0;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (int)orientation;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)a0;

@end
