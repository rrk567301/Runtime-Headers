@class NSMutableArray;

@interface _NSPathLocationAnimation : NSAnimation {
    NSMutableArray *_originalWidths;
}

- (void)dealloc;
- (void)addOriginalWidth:(double)a0;
- (double)originalWidthForIndex:(long long)a0;
- (long long)originalWidthsCount;
- (void)setCurrentProgress:(float)a0;

@end
