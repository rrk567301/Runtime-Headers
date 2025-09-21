@class NSString;

@interface CNUIContactCardCustomAction : NSObject

@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic, getter=isDestructive) BOOL destructive;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 contactIdentifier:(id)a1 isDestructive:(BOOL)a2 actionBlock:(id /* block */)a3;
- (void)performActionForContactIdentifier:(id)a0 sourceView:(id)a1;

@end
