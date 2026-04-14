@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)dictionaryRepresentation;
- (id)description;
- (id)debugDescription;
- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
