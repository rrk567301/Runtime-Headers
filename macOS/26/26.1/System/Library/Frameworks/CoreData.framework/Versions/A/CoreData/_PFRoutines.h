@interface _PFRoutines : NSObject

+ (BOOL)isInvalidXMLCharacter:(unsigned short)a0;
+ (void)initialize;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjects:(id)a0 intoHierarchies:(BOOL)a1;
+ (id)invalidXMLCharacterSet;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjectIDs:(id)a0 intoHierarchies:(BOOL)a1;
+ (id)_frameworkHash;
+ (void)wrapBlockInGuardedAutoreleasePool:(id /* block */)a0;
+ (id)transformDecodeValue:(id)a0 forTransformerNamed:(id)a1;
+ (unsigned short)_unprotectEvilCharacter:(id)a0;
+ (unsigned short *)_protectEvilCharacter:(unsigned short)a0;

@end
