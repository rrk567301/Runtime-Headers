@class NSDictionary, NSAttributedString;

@interface TCAttributedStringDigest : NSObject {
    NSDictionary *_attributeDictionary;
}

@property (readonly, copy) NSAttributedString *digestedAttributedString;

+ (id)presentableAttributedString:(id)a0 withAttributes:(id)a1;
+ (char)useFontStyles;
+ (char)useTextLists;
+ (char)useTextTables;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)reconstituteAttributedString:(id)a0;
- (id)reconstituteAttributedString:(id)a0 addAttributes:(char)a1;

@end
