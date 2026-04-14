@class CALTimeRange;

@interface CALEntityTypeSearchElement : CALSearchElement {
    int _type;
    CALTimeRange *_range;
}

+ (id)allEntitiesSearchElement;
+ (id)searchWithEntityType:(int)a0;
+ (id)searchWithEntityType:(int)a0 withinTimeRange:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setTimeRange:(id)a0;
- (id)timeRange;
- (int)entityType;
- (BOOL)matchesEntity:(id)a0;
- (id)initWithEntityType:(int)a0 withinTimeRange:(id)a1;

@end
