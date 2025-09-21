@interface CSEventDonationJournalItem : NSObject {
    unsigned int _flags;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _identifier;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _itemObj;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _attrDictObj;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _customDictObj;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _contentObj;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _htmlObj;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _embeddingsObj;
}

- (BOOL)isUpdate;
- (BOOL)containsAttribute:(id)a0;
- (BOOL)hasTextContent;
- (id)attributesForKeys:(id)a0 bundleID:(id)a1;
- (BOOL)containsAnyInAttributes:(id)a0;
- (BOOL)hasHTMLContent;
- (id)initWithIdentifier:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0 itemObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a1 attrDictObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a2 customDictObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a3 contentObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a4 htmlObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a5 embeddingsObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a6 flags:(unsigned int)a7;
- (BOOL)isUserActivity;

@end
