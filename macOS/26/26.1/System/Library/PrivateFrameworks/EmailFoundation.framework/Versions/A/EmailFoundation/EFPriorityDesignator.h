@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStack;
+ (id)installNewDesignator;
+ (void)destroyCurrentDesignator;
+ (id)pushNewDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;

@end
