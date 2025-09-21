@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *keyName;
@property (getter=isUnique) char unique;
@property (getter=isSearchable) char searchable;
@property (getter=isSearchableByDefault) char searchableByDefault;
@property (getter=isMultiValued) char multiValued;

+ (char)_keyNameIsValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyName:(id)a0 searchable:(char)a1 searchableByDefault:(char)a2 unique:(char)a3 multiValued:(char)a4;
- (id)initWithKeyName:(id)a0;

@end
