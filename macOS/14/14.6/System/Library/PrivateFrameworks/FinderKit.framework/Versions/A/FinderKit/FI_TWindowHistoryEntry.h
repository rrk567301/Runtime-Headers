@class NSDictionary;

@interface FI_TWindowHistoryEntry : NSObject

@property (nonatomic) struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } targetPath;
@property (retain, nonatomic) NSDictionary *windowState;
@property (retain, nonatomic) NSDictionary *searchState;

+ (id)historyEntryForTargetPath:(const void *)a0 windowState:(id)a1;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id).cxx_construct;

@end
