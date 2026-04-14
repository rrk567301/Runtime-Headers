@class NSArray, NSMutableDictionary;

@interface _NSAlertConstraintLayoutContext : NSObject {
    NSMutableDictionary *_contentAlignmentConstraints;
}

@property (readonly, copy) NSArray *transientConstraints;
@property (readonly, copy) NSArray *persistentConstraints;

- (id)init;
- (void)dealloc;
- (id)constraintsForContentAlignment:(unsigned long long)a0;
- (void)addConstraintsFromArray:(id)a0 forContentAlignment:(unsigned long long)a1;
- (void)addPersistentConstraintsFromArray:(id)a0;
- (void)addTransientConstraintsFromArray:(id)a0;

@end
