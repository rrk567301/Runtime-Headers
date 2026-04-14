@class NSMutableArray;

@interface _NSPathLocationAnimation : NSAnimation {
    NSMutableArray *_originalWidths;
}

- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)addOriginalWidth:(double)a0;
- (double)originalWidthForIndex:(long long)a0;
- (long long)originalWidthsCount;

@end
