@class TSTTableRep;

@interface TSAPdfTaggerTableChunkContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSTTableRep *tableChunkRep;
@property (readonly, nonatomic) char multispace;
@property (nonatomic) char firstSpace;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 tableChunk:(id)a1;

@end
