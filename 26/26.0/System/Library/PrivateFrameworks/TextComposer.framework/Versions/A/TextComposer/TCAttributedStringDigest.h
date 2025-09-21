@class NSString, TCAttributedStringFormatOptions, NSDictionary, NSAttributedString, TCAttributedStringFormatter;

@interface TCAttributedStringDigest : NSObject {
    NSDictionary *_attributeDictionary;
    NSDictionary *_attachmentDictionary;
}

@property (readonly, copy) NSAttributedString *digestedAttributedString;
@property (readonly, copy) TCAttributedStringFormatter *attributedStringFormatter;
@property (readonly, copy) NSString *inputFormattedString;
@property (readonly, copy) TCAttributedStringFormatOptions *formatOptions;

+ (id)reconstituteAttributedStringFromFormattedString:(id)a0 formatOptions:(id)a1 attributes:(id)a2;
+ (id)presentableAttributedString:(id)a0 withAttributes:(id)a1;
+ (id)reconstituteAttributedStringFromDigestedAttributedString:(id)a0 formatOptions:(id)a1 attributes:(id)a2;
+ (id)reconstituteAttributedStringFromDigestedAttributedString:(id)a0 formatOptions:(id)a1 attributes:(id)a2 attachments:(id)a3;
+ (id)reconstituteAttributedStringFromFormattedString:(id)a0 formatOptions:(id)a1 attributes:(id)a2 attachments:(id)a3;
+ (BOOL)useFontStyles;
+ (BOOL)useTextAttachments;
+ (BOOL)useTextLists;
+ (BOOL)useTextTables;
+ (BOOL)useUTTypes;

- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 formatOptions:(id)a1;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 formatOptions:(id)a2;
- (id)reconstituteAttributedString:(id)a0;
- (id)reconstituteAttributedString:(id)a0 addAttributes:(BOOL)a1;
- (id)reconstituteAttributedStringFromDigestedAttributedString:(id)a0;
- (id)reconstituteAttributedStringFromDigestedAttributedString:(id)a0 attachments:(id)a1;
- (id)reconstituteAttributedStringFromFormattedString:(id)a0;
- (id)reconstituteAttributedStringFromFormattedString:(id)a0 attachments:(id)a1;

@end
