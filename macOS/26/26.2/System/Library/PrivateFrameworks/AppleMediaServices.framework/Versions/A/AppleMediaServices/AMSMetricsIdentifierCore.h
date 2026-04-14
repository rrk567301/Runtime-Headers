@interface AMSMetricsIdentifierCore : NSObject

+ (id)_removeU13Identifier:(id)a0 account:(id)a1;
+ (BOOL)_shouldReplaceInfo:(id)a0 withInfo:(id)a1 isServerRecord:(BOOL)a2;
+ (BOOL)_shouldUpdateDatabaseFor:(id)a0 consumerIDResetInterval:(double)a1;

@end
