@interface MSVEntitlementUtilities : NSObject

+ (char)hasBoolEntitlement:(id)a0 shouldLogForMissingEntitlement:(char)a1;
+ (id)_checkArrayEntitlement:(id)a0 group:(id)a1 task:(struct __SecTask { } *)a2;
+ (id)_checkBooleanEntitlement:(id)a0 task:(struct __SecTask { } *)a1;
+ (char)_checkEntitlement:(id)a0 inGroup:(id)a1 shouldLogForMissingEntitlement:(char)a2;
+ (void)_logForMissingEntitlementWithResult:(id)a0;
+ (char)hasBoolEntitlement:(id)a0;
+ (char)hasEntitlement:(id)a0 inGroup:(id)a1;
+ (char)hasEntitlement:(id)a0 inGroup:(id)a1 shouldLogForMissingEntitlement:(char)a2;

@end
