@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)description;
- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
