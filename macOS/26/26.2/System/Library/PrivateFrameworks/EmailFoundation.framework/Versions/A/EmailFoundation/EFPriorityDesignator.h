@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStackIfExists;
+ (id)installNewDesignator;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorIfExists;
+ (id)pushNewDesignator;
+ (id)currentDesignatorStack;

@end
