@interface ABAddressBookURLFactory : NSObject

+ (id)accountURLWithUniqueId:(id)a0;
+ (id)personURLWithUniqueId:(id)a0;
+ (id)personURLWithUniqueId:(id)a0 shouldEdit:(char)a1;
+ (id)personURLWithUniqueId:(id)a0 shouldUnify:(char)a1;

@end
