@interface CRLoadCounterFacade : NSObject

+ (void)recordLoad:(id)a0 owner:(id)a1;
+ (void)recordUnload:(id)a0 owner:(id)a1;

- (id)init;

@end
