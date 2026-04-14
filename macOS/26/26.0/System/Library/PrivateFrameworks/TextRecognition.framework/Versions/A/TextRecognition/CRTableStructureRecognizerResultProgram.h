@class NSArray, NSString, CRNormalizedQuad;

@interface CRTableStructureRecognizerResultProgram : NSObject

@property (nonatomic) struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; int *__cap_; } programTokenIdxs;
@property (retain, nonatomic) NSArray *programTokens;
@property (retain, nonatomic) NSString *programString;
@property (retain, nonatomic) CRNormalizedQuad *tableQuad;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
