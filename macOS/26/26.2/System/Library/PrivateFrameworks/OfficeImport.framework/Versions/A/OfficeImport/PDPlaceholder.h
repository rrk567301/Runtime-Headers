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
- (void)setType:(int)a0;
- (int)orientation;
- (void)setSize:(int)a0;
- (void)setOrientation:(int)a0;
- (int)type;
- (id)description;
- (int)size;
- (void)setIndex:(unsigned int)a0;
- (id)init;
- (void)setBoundsTrack:(int)a0;
- (int)boundsTrack;

@end
