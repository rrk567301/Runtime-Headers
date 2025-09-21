@interface CNContactSearchIndexFormatter : NSFormatter

- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromContact:(id)a0;
- (id)auxiliaryIndexStringForContact:(id)a0;
- (id)nameExpansionsForContact:(id)a0;

@end
