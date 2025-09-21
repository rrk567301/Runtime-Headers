@class NSSet, NSString, NSArray, NSAttributedString;

@interface ICTTMergeableAttributedString : ICTTMergeableUndoString <ICCRCoding>

@property (class, readonly, nonatomic) NSSet *allowedAttributesForModel;
@property (class, readonly, nonatomic) NSSet *allowedAttributesForStyle;
@property (class, readonly, nonatomic) NSSet *allowedTypingAttributes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSAttributedString *editsAttributedString;
@property (readonly, copy, nonatomic) NSArray *edits;

+ (int)attributeForWritingDirection:(long long)a0;
+ (id)attributesForRun:(const void *)a0;
+ (void)saveAttributes:(id)a0 toArchive:(void *)a1;
+ (void)saveAttributesOfString:(id)a0 toArchive:(void *)a1;
+ (long long)writingDirectionForAttribute:(int)a0;

- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)invalidateCache;
- (id)serialize;
- (char)attributesEqual:(id)a0 to:(id)a1 modelEqual:(char *)a2;
- (char)attributesEqual:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 modelEqual:(char *)a2;
- (void)saveDeltaSinceTimestamp:(id)a0 toArchive:(void *)a1;
- (void)saveToArchive:(void *)a0;
- (void)setAttributes:(id)a0 substring:(void *)a1;
- (id)initWithArchive:(const void *)a0 replicaID:(id)a1 orderedSubstrings:(void *)a2 timestamp:(id)a3 fragment:(char)a4;
- (id)editAtIndex:(unsigned long long)a0;
- (id)editsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithICCRCoder:(id)a0;
- (void)encodeWithICCRCoder:(id)a0 string:(void *)a1;
- (void)enumerateEditsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0 string:(const void *)a1;
- (void)removeTimestampsForReplicaID:(id)a0;
- (void)setTimestamp:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
