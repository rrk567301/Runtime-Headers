@class NSArray, NSString, NSMutableArray;

@interface CADSPGraphModel : NSObject <NSCopying, NSMutableCopying> {
    struct GraphModel { struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } name; unsigned int sampleRateConversionAlgorithm; unsigned int sampleRateConversionQuality; struct SliceDuration { unsigned int numberOfFrames; unsigned int sampleRate; } sliceDuration; BOOL sliceDurationCanVary; struct Options { unsigned char shouldEnableDryRun : 1; unsigned char shouldEnableInPlaceProcessing : 1; unsigned char shouldEnableLatencyCompensation : 1; unsigned char shouldEnableOfflineProcessing : 1; } options; struct vector<AudioDSPGraph::IR::BoxModel, std::allocator<AudioDSPGraph::IR::BoxModel>> { struct BoxModel *__begin_; struct BoxModel *__end_; struct BoxModel *__cap_; } boxes; struct vector<AudioDSPGraph::IR::BoxRelationModel, std::allocator<AudioDSPGraph::IR::BoxRelationModel>> { struct BoxRelationModel *__begin_; struct BoxRelationModel *__end_; struct BoxRelationModel *__cap_; } boxRelations; struct vector<AudioDSPGraph::IR::SubsetModel, std::allocator<AudioDSPGraph::IR::SubsetModel>> { struct SubsetModel *__begin_; struct SubsetModel *__end_; struct SubsetModel *__cap_; } subsets; struct vector<AudioDSPGraph::IR::WireModel, std::allocator<AudioDSPGraph::IR::WireModel>> { struct WireModel *__begin_; struct WireModel *__end_; struct WireModel *__cap_; } wires; struct unordered_map<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration, AudioDSPGraph::IR::Hash, std::equal_to<AudioDSPGraph::IR::WireConfigurationAlias>, std::allocator<std::pair<const AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>>> { struct __hash_table<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, std::__unordered_map_hasher<AudioDSPGraph::IR::WireConfigurationAlias, std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, AudioDSPGraph::IR::Hash, std::equal_to<AudioDSPGraph::IR::WireConfigurationAlias>>, std::__unordered_map_equal<AudioDSPGraph::IR::WireConfigurationAlias, std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, std::equal_to<AudioDSPGraph::IR::WireConfigurationAlias>, AudioDSPGraph::IR::Hash>, std::allocator<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<AudioDSPGraph::IR::WireConfigurationAlias, AudioDSPGraph::IR::WireConfiguration>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } wireConfigurations; struct Pair<AudioDSPGraph::IR::Direction, std::vector<AudioDSPGraph::IR::PortModel>> { struct vector<AudioDSPGraph::IR::PortModel, std::allocator<AudioDSPGraph::IR::PortModel>> { struct PortModel *__begin_; struct PortModel *__end_; struct PortModel *__cap_; } input; struct vector<AudioDSPGraph::IR::PortModel, std::allocator<AudioDSPGraph::IR::PortModel>> { struct PortModel *__begin_; struct PortModel *__end_; struct PortModel *__cap_; } output; } ports; struct vector<AudioDSPGraph::IR::JackModel, std::allocator<AudioDSPGraph::IR::JackModel>> { struct JackModel *__begin_; struct JackModel *__end_; struct JackModel *__cap_; } jacks; struct vector<AudioDSPGraph::IR::ParameterModel, std::allocator<AudioDSPGraph::IR::ParameterModel>> { struct ParameterModel *__begin_; struct ParameterModel *__end_; struct ParameterModel *__cap_; } parameters; struct vector<AudioDSPGraph::IR::ParameterConnectionModel, std::allocator<AudioDSPGraph::IR::ParameterConnectionModel>> { struct ParameterConnectionModel *__begin_; struct ParameterConnectionModel *__end_; struct ParameterConnectionModel *__cap_; } parameterConnections; struct vector<AudioDSPGraph::IR::ParameterWireModel, std::allocator<AudioDSPGraph::IR::ParameterWireModel>> { struct ParameterWireModel *__begin_; struct ParameterWireModel *__end_; struct ParameterWireModel *__cap_; } parameterWires; struct vector<AudioDSPGraph::IR::PropertyModel, std::allocator<AudioDSPGraph::IR::PropertyModel>> { struct PropertyModel *__begin_; struct PropertyModel *__end_; struct PropertyModel *__cap_; } properties; struct vector<AudioDSPGraph::IR::PropertyConnectionModel, std::allocator<AudioDSPGraph::IR::PropertyConnectionModel>> { struct PropertyConnectionModel *__begin_; struct PropertyConnectionModel *__end_; struct PropertyConnectionModel *__cap_; } propertyConnections; struct vector<AudioDSPGraph::IR::PropertyWireModel, std::allocator<AudioDSPGraph::IR::PropertyWireModel>> { struct PropertyWireModel *__begin_; struct PropertyWireModel *__end_; struct PropertyWireModel *__cap_; } propertyWires; struct vector<AudioDSPGraph::IR::GraphModel::Analyzer, std::allocator<AudioDSPGraph::IR::GraphModel::Analyzer>> { struct Analyzer *__begin_; struct Analyzer *__end_; struct Analyzer *__cap_; } analyzers; struct vector<AudioDSPGraph::IR::GraphModel::AnalyzerConnection, std::allocator<AudioDSPGraph::IR::GraphModel::AnalyzerConnection>> { struct AnalyzerConnection *__begin_; struct AnalyzerConnection *__end_; struct AnalyzerConnection *__cap_; } analyzerConnections; struct vector<AudioDSPGraph::IR::InjectTapPointModel, std::allocator<AudioDSPGraph::IR::InjectTapPointModel>> { struct InjectTapPointModel *__begin_; struct InjectTapPointModel *__end_; struct InjectTapPointModel *__cap_; } injectTapPoints; struct vector<AudioDSPGraph::IR::RecordTapPointModel, std::allocator<AudioDSPGraph::IR::RecordTapPointModel>> { struct RecordTapPointModel *__begin_; struct RecordTapPointModel *__end_; struct RecordTapPointModel *__cap_; } recordTapPoints; } _this;
    NSMutableArray *_boxes;
    NSMutableArray *_boxRelations;
    NSMutableArray *_subsets;
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    NSMutableArray *_jacks;
    NSMutableArray *_wires;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterConnections;
    NSMutableArray *_parameterWires;
    NSMutableArray *_propertyConnections;
    NSMutableArray *_properties;
    NSMutableArray *_propertyWires;
    NSMutableArray *_injectorTapPoints;
    NSMutableArray *_recorderTapPoints;
}

@property (readonly, copy, nonatomic) NSArray *audioStreamConfigurationNames;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *boxRelations;
@property (readonly, copy, nonatomic) NSArray *subsets;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;
@property (readonly, copy, nonatomic) NSArray *jacks;
@property (readonly, copy, nonatomic) NSArray *wires;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *parameterConnections;
@property (readonly, copy, nonatomic) NSArray *parameterWires;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly, copy, nonatomic) NSArray *propertyConnections;
@property (readonly, copy, nonatomic) NSArray *propertyWires;
@property (readonly, copy, nonatomic) NSArray *injectorTapPoints;
@property (readonly, copy, nonatomic) NSArray *recorderTapPoints;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int sampleRateConversionAlgorithm;
@property (readonly, nonatomic) unsigned int sampleRateConversionQuality;
@property (readonly, nonatomic) unsigned int options;
@property (readonly, nonatomic) struct CADSPAudioSliceDuration { unsigned int x0; unsigned int x1; } sliceDuration;
@property (readonly, nonatomic) BOOL sliceDurationCanVary;

- (id)inputs;
- (id)parameters;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)outputs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)options;
- (id)properties;
- (id)name;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)boxes;
- (id)subsets;
- (id)audioStreamConfigurationNames;
- (id)boxRelations;
- (BOOL)getAudioStreamConfiguration:(struct CADSPAudioStreamConfiguration { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0 forName:(id)a1;
- (BOOL)getAudioStreamConfiguration:(struct CADSPAudioStreamConfiguration { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0 forPort:(unsigned int)a1 direction:(unsigned int)a2;
- (id)injectorTapPoints;
- (id)jacks;
- (id)parameterConnections;
- (id)parameterWires;
- (id)propertyConnections;
- (id)propertyWires;
- (unsigned int)sampleRateConversionAlgorithm;
- (unsigned int)sampleRateConversionQuality;
- (struct CADSPAudioSliceDuration { unsigned int x0; unsigned int x1; })sliceDuration;
- (BOOL)sliceDurationCanVary;
- (id)wires;

@end
