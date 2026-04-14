@class NSMutableDictionary;

@interface DataclassConfigManager : NSObject {
    NSMutableDictionary *_info;
    long long _actionCount;
}

+ (id)sharedManager;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (BOOL)_isLatestActionWithInfo:(id)a0 andClientTimestamp:(id)a1;
- (id)performAction:(long long)a0 forDataclass:(id)a1 andAccount:(struct AOSAccount { } *)a2 withInfo:(id)a3;

@end
