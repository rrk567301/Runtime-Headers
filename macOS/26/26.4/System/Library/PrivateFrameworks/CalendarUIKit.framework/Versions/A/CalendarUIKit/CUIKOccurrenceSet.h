@interface CUIKOccurrenceSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *_dictionary;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeOccurrence:(id)a0;
- (id)init;
- (unsigned long long)count;
- (void)addOccurrence:(id)a0;
- (BOOL)containsOccurrence:(id)a0;
- (BOOL)containsOccurrenceWithID:(id)a0 date:(id)a1;
- (id)occurrenceWithID:(id)a0 date:(id)a1;
- (id)occurrenceWithOccurrence:(id)a0;
- (void)removeAllOccurrences;
- (void)removeOccurrenceWithID:(id)a0 date:(id)a1;

@end
