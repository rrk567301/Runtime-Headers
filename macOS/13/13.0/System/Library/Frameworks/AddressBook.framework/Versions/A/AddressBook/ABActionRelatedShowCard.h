@class NSString;

@interface ABActionRelatedShowCard : NSObject

@property (copy) NSString *targetUniqueId;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)titleForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (id)actionProperty;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;

@end
