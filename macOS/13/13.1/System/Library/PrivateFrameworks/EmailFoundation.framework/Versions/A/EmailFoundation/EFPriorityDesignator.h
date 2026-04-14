@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)installNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorStack;
+ (id)pushNewDesignator;
+ (void)destroyCurrentDesignator;

@end
