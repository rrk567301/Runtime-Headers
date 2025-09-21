@class NSString, NSURL;

@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) char forRange;
@property (readonly, nonatomic) char hidden;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } effectiveRange;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedNameForName:(id)a0;
+ (char)supportsNonBodyBookmarks;
+ (id)uniqueBookmarkNameFromBase:(id)a0 excludingNames:(id)a1;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)allowsEditing;
- (id)copyWithContext:(id)a0;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned short)smartFieldKind;
- (id)copyWithNewName:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1 forRange:(char)a2 hidden:(char)a3;
- (char)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;

@end
