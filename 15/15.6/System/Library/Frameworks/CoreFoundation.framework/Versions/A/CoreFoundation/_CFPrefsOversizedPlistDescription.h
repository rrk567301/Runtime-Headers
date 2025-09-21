@interface _CFPrefsOversizedPlistDescription : NSObject {
    struct __CFDictionary { } *existingValues;
    struct __CFDictionary { } *newValues;
}

- (void)dealloc;
- (id)description;
- (id)_descriptionOfDictionary:(struct __CFDictionary { } *)a0 withKeyRedaction:(char)a1;
- (id)_descriptionWithKeyRedaction:(char)a0;
- (id)redactedDescription;

@end
