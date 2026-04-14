@interface _PFRoutines : NSObject

+ (void)initialize;
+ (id)invalidXMLCharacterSet;
+ (unsigned short *)_protectEvilCharacter:(unsigned short)a0;
+ (BOOL)isInvalidXMLCharacter:(unsigned short)a0;
+ (id)_frameworkHash;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjects:(id)a0 intoHierarchies:(BOOL)a1;
+ (unsigned short)_unprotectEvilCharacter:(id)a0;
+ (id)transformDecodeValue:(id)a0 forTransformerNamed:(id)a1;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjectIDs:(id)a0 intoHierarchies:(BOOL)a1;
+ (void)wrapBlockInGuardedAutoreleasePool:(id /* block */)a0;

@end
