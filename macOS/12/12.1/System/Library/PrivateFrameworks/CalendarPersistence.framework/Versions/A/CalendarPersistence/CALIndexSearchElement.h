@class NSString;

@interface CALIndexSearchElement : CALSearchElement {
    NSString *_value;
    int _type;
    NSString *_prop;
}

+ (id)searchElementForIndex:(id)a0 withEntityType:(int)a1 matchedProperty:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)property;
- (int)entityType;
- (BOOL)matchesEntity:(id)a0;
- (BOOL)isEqualToSearchElement:(id)a0;
- (id)initForIndexString:(id)a0 withEntityType:(int)a1 matchedProperty:(id)a2;
- (id)indexString;

@end
