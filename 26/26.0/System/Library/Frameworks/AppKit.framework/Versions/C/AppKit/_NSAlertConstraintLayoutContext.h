@class NSArray;

@interface _NSAlertConstraintLayoutContext : NSObject

@property (readonly, copy) NSArray *transientConstraints;
@property (readonly, copy) NSArray *persistentConstraints;

- (id)init;
- (void)addPersistentConstraintsFromArray:(id)a0;
- (void)addTransientConstraintsFromArray:(id)a0;

@end
