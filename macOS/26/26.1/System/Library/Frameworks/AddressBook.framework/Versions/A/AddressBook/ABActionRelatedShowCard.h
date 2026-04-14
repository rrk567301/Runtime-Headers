@class NSString;

@interface ABActionRelatedShowCard : NSObject

@property (copy) NSString *targetUniqueId;

- (id)unlocalizedTitle;
- (void).cxx_destruct;
- (id)actionProperty;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
