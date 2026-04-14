@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStackIfExists;
+ (id)installNewDesignator;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorStack;
+ (id)pushNewDesignator;

@end
