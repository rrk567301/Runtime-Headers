@class NSString, LNEntityIdentifier;

@interface LNDynamicTerm : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *term;
@property (readonly, nonatomic) LNEntityIdentifier *entityIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTerm:(id)a0 entityIdentifier:(id)a1;
- (id)initWithTerm:(id)a0 entityIdentifierValue:(id)a1 entityTypeName:(id)a2;

@end
