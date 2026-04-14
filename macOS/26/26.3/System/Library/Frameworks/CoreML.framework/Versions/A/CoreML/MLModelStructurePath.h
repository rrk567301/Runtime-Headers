@class NSArray;

@interface MLModelStructurePath : NSObject <NSCopying>

@property (readonly, nonatomic) struct Path { struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } m_components; } cppPath;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, nonatomic) BOOL isNeuralNetworkLayerPath;
@property (readonly, nonatomic) BOOL isMLProgramOperationPath;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithCppPath:(struct Path { struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *x0; void *x1; struct { void *x0; } x2; } x0; })a0;
- (id)initWithMLProgramOperationPathComponents:(id)a0 scopedModelNames:(id)a1 error:(id *)a2;
- (id)initWithNeuralNetworkLayerName:(id)a0 scopedModelNames:(id)a1;

@end
