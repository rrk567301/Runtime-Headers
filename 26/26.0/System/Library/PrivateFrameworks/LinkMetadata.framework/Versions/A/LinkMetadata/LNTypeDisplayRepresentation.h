@class NSArray, LNStaticDeferredLocalizedString;

@interface LNTypeDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *name;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *numericFormat;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 numericFormat:(id)a1 synonyms:(id)a2;
- (id)initWithName:(id)a0 numericFormat:(id)a1;

@end
