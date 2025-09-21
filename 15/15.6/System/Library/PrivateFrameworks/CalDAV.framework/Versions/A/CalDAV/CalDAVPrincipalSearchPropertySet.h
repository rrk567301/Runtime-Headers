@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject

@property (retain, nonatomic) NSSet *stringProperties;
@property (readonly, nonatomic) char supportsPropertySearch;

+ (id)searchSetWithProperties:(id)a0;

- (void).cxx_destruct;
- (id)initWithSearchProperties:(id)a0;
- (id)initWithStringProperties:(id)a0;
- (char)isEqualToPropertySet:(id)a0;
- (char)supportsPropertyTypeWithNameSpace:(id)a0 andName:(id)a1;
- (char)supportsWellKnownType:(int)a0;

@end
