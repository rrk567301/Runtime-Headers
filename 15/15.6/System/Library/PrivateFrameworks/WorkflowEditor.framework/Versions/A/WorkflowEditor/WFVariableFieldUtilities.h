@interface WFVariableFieldUtilities : NSObject

+ (char)clipboardContainsVariableString;
+ (void)copyVariableString:(id)a0 toPasteboard:(id)a1;
+ (char)pasteboardContainsVariableString:(id)a0;
+ (id)serializedVariableStringFromPasteboard:(id)a0;

@end
