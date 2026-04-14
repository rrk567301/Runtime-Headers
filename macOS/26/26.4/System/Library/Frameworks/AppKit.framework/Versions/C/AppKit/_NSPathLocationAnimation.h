@class NSMutableArray;

@interface _NSPathLocationAnimation : NSAnimation {
    NSMutableArray *_originalWidths;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)a0;
- (void)addOriginalWidth:(double)a0;
- (double)originalWidthForIndex:(long long)a0;
- (long long)originalWidthsCount;

@end
