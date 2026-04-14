@class NSMutableArray;

@interface _NSPathLocationAnimation : NSAnimation {
    NSMutableArray *_originalWidths;
}

- (void)dealloc;
- (void)setCurrentProgress:(float)a0;
- (void)addOriginalWidth:(double)a0;
- (long long)originalWidthsCount;
- (double)originalWidthForIndex:(long long)a0;

@end
