@class NSString;

@interface GKEditAction : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL destructive;

+ (id)deleteActionWithName:(id)a0;
+ (id)actionWithName:(id)a0 selector:(SEL)a1;

- (void).cxx_destruct;

@end
