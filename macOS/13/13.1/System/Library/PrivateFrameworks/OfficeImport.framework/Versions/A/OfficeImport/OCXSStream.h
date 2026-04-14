@class NSMutableArray;

@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}

- (id)init;
- (void).cxx_destruct;
- (int)currentContextDepth;
- (int)currentContextChildDepth;
- (void)pushLevel:(int)a0 name:(const char *)a1;
- (BOOL)popLevel;
- (BOOL)hasLevels;

@end
