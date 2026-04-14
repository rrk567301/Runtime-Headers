@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)serializableEvent;
- (id)coreAnalyticsKey;
- (void)trackWithCount:(int)a0;

@end
