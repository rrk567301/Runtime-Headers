@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)pushNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignatorStack;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorStackIfExists;

@end
