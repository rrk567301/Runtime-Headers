@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStack;
+ (void)destroyCurrentDesignator;
+ (id)installNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStackIfExists;
+ (id)pushNewDesignator;

@end
