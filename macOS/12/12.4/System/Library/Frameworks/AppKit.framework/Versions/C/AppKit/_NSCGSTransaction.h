@class NSPointerArray, NSMutableDictionary;

@interface _NSCGSTransaction : NSObject {
    NSPointerArray *_preCommitActions[3];
    NSPointerArray *_postCommitActions;
    NSMutableDictionary *_objects;
    const void *_disableUpdatesToken;
}

+ (void)initialize;
+ (BOOL)isActive;
+ (void)setSynchronous:(BOOL)a0;
+ (id)currentTransaction;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)disableUpdates;
- (void)addActionWithOrder:(long long)a0 usingBlock:(id /* block */)a1;
- (void)addPostCommitAction:(id /* block */)a0;

@end
