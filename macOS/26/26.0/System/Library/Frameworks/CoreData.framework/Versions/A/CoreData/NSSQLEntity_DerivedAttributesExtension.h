@class NSSQLEntity, NSMutableArray, NSMutableDictionary;

@interface NSSQLEntity_DerivedAttributesExtension : NSObject {
    NSSQLEntity *_entity;
    struct __CFDictionary { } *_derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}

- (id)entity;
- (void)dealloc;
- (id)initWithEntity:(id)a0;

@end
