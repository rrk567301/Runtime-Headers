@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct SignalPack { struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>, std::allocator<std::pair<const MapsSuggestionsSignalType, MSg::Signal>>> { struct __hash_table<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__unordered_map_hasher<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>>, std::__unordered_map_equal<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::equal_to<MapsSuggestionsSignalType>, std::hash<MapsSuggestionsSignalType>>, std::allocator<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } dict_; } _innerSignalPack;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)extractFromDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)extractFromDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)signalPackFromData:(id)a0;

- (id)copy;
- (id)rawSignalDictionary;
- (id)mutableCopy;
- (unsigned long long)count;
- (BOOL)mergeIntoSignalPack:(id)a0;
- (float)valueForSignalType:(long long)a0;
- (id)encodedFeatureDictionary;
- (id)initWithSignalPack:(id)a0;
- (BOOL)hasType:(long long)a0;
- (BOOL)isEmpty;
- (id)description;
- (id)data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;

@end
