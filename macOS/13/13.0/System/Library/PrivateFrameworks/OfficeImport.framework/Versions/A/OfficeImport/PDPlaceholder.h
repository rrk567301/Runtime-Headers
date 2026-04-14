@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isTextType:(int)a0;
+ (BOOL)isNonTextType:(int)a0;

- (id)description;
- (id)init;
- (int)size;
- (int)type;
- (void)setType:(int)a0;
- (void)setSize:(int)a0;
- (void)setOrientation:(int)a0;
- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (int)orientation;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)a0;

@end
