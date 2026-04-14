@class NSDictionary;

@interface FI_TWindowHistoryEntry : NSObject

@property (nonatomic) struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct { struct TFENode *__cap_; } ; } targetPath;
@property (retain, nonatomic) NSDictionary *windowState;
@property (retain, nonatomic) NSDictionary *searchState;

+ (id)historyEntryForTargetPath:(const void *)a0 windowState:(id)a1;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id).cxx_construct;

@end
