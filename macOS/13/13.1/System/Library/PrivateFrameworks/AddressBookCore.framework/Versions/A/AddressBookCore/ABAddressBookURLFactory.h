@interface ABAddressBookURLFactory : NSObject

+ (id)personURLWithUniqueId:(id)a0;
+ (id)personURLWithUniqueId:(id)a0 shouldUnify:(BOOL)a1;
+ (id)personURLWithUniqueId:(id)a0 shouldEdit:(BOOL)a1;
+ (id)accountURLWithUniqueId:(id)a0;

@end
