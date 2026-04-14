@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)track;
- (id)propertyNames;
- (void)trackWithCount:(int)a0;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
