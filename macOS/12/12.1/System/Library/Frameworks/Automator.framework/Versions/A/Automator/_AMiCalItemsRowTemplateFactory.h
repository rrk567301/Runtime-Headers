@interface _AMiCalItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMiCalItemsRowTemplateFactory *sharedInstance;

- (id)rowTemplatesForItemType:(id)a0;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)iCalToDoPriorityRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplatesForiCalEvents;
- (id)rowTemplatesForiCalToDos;
- (id)rowTemplatesForiCalCalendars;

@end
