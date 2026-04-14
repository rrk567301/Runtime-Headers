@class NSMutableArray;

@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}

- (void).cxx_destruct;
- (id)init;
- (void)pushLevel:(int)a0 name:(const char *)a1;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (BOOL)hasLevels;
- (BOOL)popLevel;

@end
