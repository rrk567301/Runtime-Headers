@interface MSSendMailIntentFormatter : NSFormatter

- (char)allowsReverseTransformation;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)_stringForAddresses:(id)a0;

@end
