@class aura_ConfigurationChangeRecord;

@interface aura_ConfigurationChangeDescription : NSObject <NSCopying>

@property (nonatomic) unsigned int configurationChangeCause;
@property (retain, nonatomic) aura_ConfigurationChangeRecord *hardwareConfigurationChangeRecord;
@property (nonatomic) struct map<unsigned int, aura_ConfigurationChangeRecord *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, aura_ConfigurationChangeRecord *>>> { struct __tree<std::__value_type<unsigned int, aura_ConfigurationChangeRecord *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, aura_ConfigurationChangeRecord *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, aura_ConfigurationChangeRecord *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, aura_ConfigurationChangeRecord *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, aura_ConfigurationChangeRecord *>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } sessionConfigurationChangeRecords;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
