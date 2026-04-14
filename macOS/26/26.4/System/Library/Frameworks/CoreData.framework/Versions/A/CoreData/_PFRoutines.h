@interface _PFRoutines : NSObject

+ (void)initialize;
+ (id)transformDecodeValue:(id)a0 forTransformerNamed:(id)a1;
+ (id)invalidXMLCharacterSet;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjects:(id)a0 intoHierarchies:(BOOL)a1;
+ (unsigned short *)_protectEvilCharacter:(unsigned short)a0;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjectIDs:(id)a0 intoHierarchies:(BOOL)a1;
+ (unsigned short)_unprotectEvilCharacter:(id)a0;
+ (id)_frameworkHash;
+ (void)wrapBlockInGuardedAutoreleasePool:(id /* block */)a0;
+ (BOOL)isInvalidXMLCharacter:(unsigned short)a0;

@end
