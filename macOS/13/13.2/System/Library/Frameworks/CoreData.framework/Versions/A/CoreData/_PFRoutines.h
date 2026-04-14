@interface _PFRoutines : NSObject

+ (void)initialize;
+ (id)_frameworkHash;
+ (id)invalidXMLCharacterSet;
+ (BOOL)isInvalidXMLCharacter:(unsigned short)a0;
+ (unsigned short *)_protectEvilCharacter:(unsigned short)a0;
+ (unsigned short)_unprotectEvilCharacter:(id)a0;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjects:(id)a0 intoHierarchies:(BOOL)a1;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjectIDs:(id)a0 intoHierarchies:(BOOL)a1;
+ (void)wrapBlockInGuardedAutoreleasePool:(id /* block */)a0;

@end
