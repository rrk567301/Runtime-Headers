@class GEOMapItemStorage;

@interface MapsSuggestionsOutsideOfMapItemFenceCondition : MapsSuggestionsBaseCondition {
    GEOMapItemStorage *_mapItem;
    double _radius;
}

- (void).cxx_destruct;
- (char)isTrue;
- (id)initWithMapItem:(id)a0 radius:(double)a1;

@end
