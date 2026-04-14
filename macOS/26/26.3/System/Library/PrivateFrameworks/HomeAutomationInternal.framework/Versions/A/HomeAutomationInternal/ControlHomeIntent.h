@class NSArray, HomeUserTask, INDateComponentsRange;

@interface ControlHomeIntent : INIntent

@property (nonatomic, retain) HomeUserTask *userTask;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, retain) INDateComponentsRange *time;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
