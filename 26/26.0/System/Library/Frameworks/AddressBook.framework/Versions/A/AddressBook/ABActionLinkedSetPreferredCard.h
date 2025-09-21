@class NSString;

@interface ABActionLinkedSetPreferredCard : NSObject

@property (copy) NSString *targetUniqueId;

- (id)unlocalizedTitle;
- (void).cxx_destruct;
- (id)actionProperty;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldMakeMyPerson:(id)a0 person:(id)a1 addressBook:(id)a2;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
