@class NSDictionary, NSMutableDictionary;

@interface _LTDisambiguationChangeManager : NSObject {
    NSMutableDictionary *_changeMapping;
}

@property (readonly, copy, nonatomic) NSDictionary *changeMapping;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)addUserSelection:(id)a0;
- (BOOL)hasAnyChangeOfType:(unsigned long long)a0;
- (BOOL)restoreChangesToResult:(id)a0;

@end
