@class NSString, NSSet, NSDictionary;
@protocol PLJournalEntryPayloadPropertyInfo;

@interface PLJournalEntryPayloadProperty : NSObject {
    char _requiresConversion;
}

@property (nonatomic, getter=isOptional) char optional;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) PLJournalEntryPayloadProperty *parentProperty;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) char requiresConversion;
@property (readonly, nonatomic) char isUUIDKey;
@property (readonly, nonatomic) NSSet *relatedEntityPropertyNames;
@property (readonly, nonatomic) NSDictionary *subRelationshipProperties;
@property (readonly, nonatomic) char shouldPrefetchRelationship;
@property (readonly, nonatomic) char isToManySubRelationship;
@property (readonly, nonatomic) NSString *subRelationshipEntityName;
@property (readonly, nonatomic) char isAdditionalEntityName;
@property (readonly, nonatomic) id<PLJournalEntryPayloadPropertyInfo> info;
@property (readonly, nonatomic) char hasSourceObjectValue;

+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1 info:(id)a2;
+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1 requiresConversion:(char)a2 info:(id)a3;
+ (id)payloadPropertyWithKey:(id)a0 relatedEntityPropertyNames:(id)a1 shouldPrefetchRelationship:(char)a2;
+ (id)payloadPropertyWithKey:(id)a0 subRelationshipProperties:(id)a1 subRelationshipEntityName:(id)a2 isToMany:(char)a3 isAdditionalEntityName:(char)a4 info:(id)a5;

- (id)description;
- (void).cxx_destruct;
- (char)isEqualToKey:(id)a0;
- (id)initWithKey:(id)a0 andType:(unsigned long long)a1 subRelationshipProperties:(id)a2 subRelationshipEntityName:(id)a3 requiresConversion:(char)a4 relatedEntityPropertyNames:(id)a5 isUUIDKey:(char)a6 isToManySubRelationship:(char)a7 shouldPrefetchRelationship:(char)a8 isAdditionalEntityName:(char)a9 info:(id)a10;

@end
