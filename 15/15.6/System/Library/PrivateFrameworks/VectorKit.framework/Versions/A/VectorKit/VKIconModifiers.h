@interface VKIconModifiers : NSObject {
    struct IconModifiers { BOOL _isClusterIcon; BOOL _isGlyphHidden; BOOL _isGlyphOnly; BOOL _isInfoOnly; BOOL _isMirrored; BOOL _isLandmark; BOOL _isSelected; BOOL _useBalloonShape; float _opacity; float _scale; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _pathScale; unsigned char _component; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _customColor; struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { struct Matrix<unsigned char, 4, 1> { unsigned char _e[4]; } _backing; } type; } _value; } _shapeColor; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _fontSize; struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _tailDirection; struct optional<std::string> { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } type; } _value; } _textLocale; struct map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>> { struct __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; struct StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator> { struct Allocator *_allocator; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>>> { unsigned long long __value_; } __pair3_; } __tree_; } _text; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _clusterIconValues; struct vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB> *, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> { void *__value_; } __end_cap_; } _clusterColors; struct function<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)> { struct __value_func<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)> { struct type { unsigned char __lx[32]; } __buf_; void *__f_; } __f_; } _imageDataProvider; } _iconModifiers;
}

@property (nonatomic) char nightMode;
@property (nonatomic) char transitMode;
@property (nonatomic) char navMode;
@property (nonatomic) char interactive;
@property (nonatomic, getter=isSearchResult) char searchResult;
@property (nonatomic) char elevated;
@property (nonatomic) long long zoom;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) unsigned long long secondaryVariant;
@property (nonatomic) unsigned long long countryCode;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setText:(id)a0;
- (void)setGlyphOnly:(char)a0;
- (void)setTransitLineColor:(struct { float x0; float x1; float x2; float x3; })a0;
- (void *)cppModifiers;
- (id)initWithModifiers:(const void *)a0;

@end
