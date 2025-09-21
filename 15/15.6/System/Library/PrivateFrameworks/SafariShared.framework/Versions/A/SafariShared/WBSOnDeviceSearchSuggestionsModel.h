@class NSFileHandle;

@interface WBSOnDeviceSearchSuggestionsModel : NSObject {
    NSFileHandle *_modelFileHandle;
}

@property (readonly, nonatomic) unsigned int scoreSize;
@property (readonly, nonatomic) unsigned int addressSize;

- (void).cxx_destruct;
- (char)_readNextChild:(struct _WBSSearchSuggestionCandidate { unsigned int x0; unsigned int x1; char x2; id x3; } *)a0;
- (unsigned int)_readMaxScoreAsRootAtAddress:(unsigned int)a0 withLeafCandidate:(struct _WBSSearchSuggestionCandidate { unsigned int x0; unsigned int x1; char x2; id x3; } *)a1 success:(char *)a2;
- (unsigned int)_readNextNumberOfBytesAsInt:(unsigned int)a0 success:(char *)a1;
- (id)_readNextNumberOfBytesAsString:(unsigned int)a0 success:(char *)a1;
- (id)initWithModelFileAtPath:(id)a0;
- (struct vector<_WBSSearchSuggestionCandidate, std::allocator<_WBSSearchSuggestionCandidate>> { struct _WBSSearchSuggestionCandidate *x0; struct _WBSSearchSuggestionCandidate *x1; struct __compressed_pair<_WBSSearchSuggestionCandidate *, std::allocator<_WBSSearchSuggestionCandidate>> { struct _WBSSearchSuggestionCandidate *x0; } x2; })readTreeNodeWithCandidate:(struct _WBSSearchSuggestionCandidate { unsigned int x0; unsigned int x1; char x2; id x3; } *)a0;

@end
