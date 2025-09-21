@class NSDictionary, NSMutableDictionary;

@interface _LTDisambiguationChangeManager : NSObject {
    NSMutableDictionary *_changeMapping;
}

@property (readonly, copy, nonatomic) NSDictionary *changeMapping;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)addUserSelection:(id)a0;
- (BOOL)hasAnyChangeOfType:(unsigned long long)a0;
- (BOOL)restoreChangesToResult:(id)a0;

@end
