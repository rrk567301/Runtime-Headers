@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *key;
@property (readonly) char ascending;
@property (readonly) SEL selector;
@property (readonly) id /* block */ comparator;
@property (readonly, retain) id reversedSortDescriptor;

+ (void)initialize;
+ (id)_defaultSelectorName;
+ (id)sortDescriptorWithKey:(id)a0;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(char)a1;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(char)a1 comparator:(id /* block */)a2;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(char)a1 reverseNullOrder:(char)a2;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(char)a1 selector:(SEL)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 ascending:(char)a1 selector:(SEL)a2;
- (void)allowEvaluation;
- (void)_disallowEvaluation;
- (char)_isEqualToSortDescriptor:(id)a0;
- (id)_selectorName;
- (void)_setAscending:(char)a0;
- (void)_setKey:(id)a0;
- (void)_setSelectorName:(id)a0;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)initWithKey:(id)a0 ascending:(char)a1;
- (id)initWithKey:(id)a0 ascending:(char)a1 comparator:(id /* block */)a2;
- (id)initWithKey:(id)a0 ascending:(char)a1 reverseNullOrder:(char)a2;
- (id)initWithKey:(id)a0 ascending:(char)a1 reverseNullOrder:(char)a2 selector:(SEL)a3;
- (id)replacementObjectForPortCoder:(id)a0;
- (char)reverseNullOrder;
- (void)setReverseNullOrder:(char)a0;

@end
