@interface _PFRoutines : NSObject

+ (void)initialize;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjectIDs:(id)a0 intoHierarchies:(char)a1;
+ (struct __CFDictionary { } *)_createDictionaryPartitioningObjects:(id)a0 intoHierarchies:(char)a1;
+ (id)_frameworkHash;
+ (unsigned short *)_protectEvilCharacter:(unsigned short)a0;
+ (unsigned short)_unprotectEvilCharacter:(id)a0;
+ (id)invalidXMLCharacterSet;
+ (char)isInvalidXMLCharacter:(unsigned short)a0;
+ (void)wrapBlockInGuardedAutoreleasePool:(id /* block */)a0;

@end
