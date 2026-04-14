@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorStack;
+ (id)pushNewDesignator;

@end
