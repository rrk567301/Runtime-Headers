@interface VKIconModifiers : NSObject {
    struct IconModifiers { BOOL _isClusterIcon; BOOL _isGlyphHidden; BOOL _isGlyphOnly; BOOL _isInfoOnly; BOOL _isMirrored; BOOL _isLandmark; BOOL _isSelected; BOOL _useBalloonShape; float _opacity; float _scale; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _pathScale; unsigned char _component; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _transitLineColor; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _glyphColor; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _gradientBaseColor; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _fillColor; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _haloColor; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _fontSize; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _tailDirection; struct optional<std::string> { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } type; } _value; } _textLocale; struct map<unsigned short, std::string, std::less<unsigned short>, geo::allocator_adapter<std::pair<const unsigned short, std::string>, grl::zone_mallocator>> { struct __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>>, geo::allocator_adapter<std::__value_type<unsigned short, std::string>, grl::zone_mallocator>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; struct allocator_adapter<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::zone_mallocator> { struct zone_mallocator { } _allocator; } __node_alloc_; unsigned long long __size_; } __tree_; } _text; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _clusterIconValues; struct vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> { void *__begin_; void *__end_; void *__cap_; } _clusterColors; struct function<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)> { struct __value_func<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _imageDataProvider; } _iconModifiers;
    struct QueryOverrides { struct intern_linear_map<gss::StyleAttribute, unsigned short, unsigned short, geo::allocator_adapter<unsigned char, gss::zone_mallocator>, 30UL> { char *_storage; unsigned int _valuesOffset; unsigned short _count; unsigned short _allocatedCount; BOOL _isInterned; BOOL _isSorted; } _overrides; } _queryOverrides;
}

@property (nonatomic, getter=isNightMode) BOOL nightMode;
@property (nonatomic, getter=isIncreaseContrast) BOOL increaseContrast;
@property (nonatomic, getter=isNewInterfaceEnabled) BOOL newInterfaceEnabled;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic, getter=isElevated) BOOL elevated;
@property (nonatomic) long long zoom;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) unsigned long long secondaryVariant;
@property (nonatomic) unsigned long long countryCode;

- (id)initTransitModifiers;
- (void)setFillColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (void)setGlyphColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (void *)cppModifiers;
- (void)setGlyphHidden:(BOOL)a0;
- (void *)queryOverrides;
- (id)init;
- (void)setText:(id)a0;
- (void)setTransitLineColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (id)initNavigationModifiers;
- (void)setHaloColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (id)initWithModifiers:(const void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initSearchResultModifiers;
- (void)setGlyphOnly:(BOOL)a0;

@end
