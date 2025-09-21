@interface SCDAVoiceTriggerCalculation : NSObject

+ (id)_adjustRecord:(id)a0 withBoostAdjust:(int)a1 constantGoodness:(int)a2 oldRecord:(id)a3 evaluator:(id)a4 device:(id)a5;
+ (id)_changeNewRecord:(id)a0 tiebreakerIfIdenticalToOldRecord:(id)a1;
+ (id)calculateRepeatVoiceTrigger:(id)a0 withOldRecord:(id)a1 device:(id)a2 adjustment:(int)a3 constantGoodness:(int)a4 evaluator:(id)a5 andContext:(id)a6;

@end
