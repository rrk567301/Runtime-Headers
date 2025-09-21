@class NSArray, LNStaticDeferredLocalizedString;

@interface LNTypeDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *name;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *numericFormat;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 numericFormat:(id)a1 synonyms:(id)a2;
- (id)initWithName:(id)a0 numericFormat:(id)a1;

@end
