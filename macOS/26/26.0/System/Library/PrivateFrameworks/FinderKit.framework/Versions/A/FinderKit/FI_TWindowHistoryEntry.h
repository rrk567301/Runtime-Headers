@class NSDictionary;

@interface FI_TWindowHistoryEntry : NSObject

@property (nonatomic) struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } targetPath;
@property (retain, nonatomic) NSDictionary *windowState;
@property (retain, nonatomic) NSDictionary *searchState;

+ (id)historyEntryForTargetPath:(const void *)a0 windowState:(id)a1;

- (BOOL)isValid;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
