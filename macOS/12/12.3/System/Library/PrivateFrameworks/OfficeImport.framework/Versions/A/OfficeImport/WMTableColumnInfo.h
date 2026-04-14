@class NSMutableArray;

@interface WMTableColumnInfo : NSObject {
    NSMutableArray *mStopArray;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned int)columnSpan:(float)a0 at:(unsigned int)a1;
- (float)stopAt:(unsigned int)a0;
- (id)initWithStopArray:(id)a0;
- (void)mergeStopArray:(id)a0;

@end
