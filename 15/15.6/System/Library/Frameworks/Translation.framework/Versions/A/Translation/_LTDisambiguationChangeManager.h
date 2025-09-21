@class NSDictionary, NSMutableDictionary;

@interface _LTDisambiguationChangeManager : NSObject {
    NSMutableDictionary *_changeMapping;
}

@property (readonly, copy, nonatomic) NSDictionary *changeMapping;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addUserSelection:(id)a0;
- (char)hasAnyChangeOfType:(unsigned long long)a0;
- (char)restoreChangesToResult:(id)a0;

@end
