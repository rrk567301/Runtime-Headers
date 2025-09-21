@class MPModelKind, NSString, MPPropertySet;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) MPModelKind *itemKind;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) MPPropertySet *itemProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemKind:(id)a0 name:(id)a1 properties:(id)a2;

@end
