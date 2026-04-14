@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isNonTextType:(int)a0;
+ (BOOL)isTextType:(int)a0;

- (unsigned int)index;
- (int)type;
- (void)setIndex:(unsigned int)a0;
- (void)setOrientation:(int)a0;
- (int)size;
- (void)setType:(int)a0;
- (id)description;
- (int)orientation;
- (void)setSize:(int)a0;
- (id)init;
- (void)setBoundsTrack:(int)a0;
- (int)boundsTrack;

@end
