@class geo_isolater;

@interface GEOAltitudeManifestReserved : NSObject {
    struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> { struct __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _reservedTriggerData;
    unsigned int _reservedCurrentRegion;
    unsigned char _reservedTourServerType;
    geo_isolater *_reservedIsolater;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
