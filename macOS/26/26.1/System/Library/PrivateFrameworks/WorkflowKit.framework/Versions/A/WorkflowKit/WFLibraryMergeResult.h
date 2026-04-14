@interface WFLibraryMergeResult : NSObject

@property (nonatomic, readonly) BOOL hasDeltaFromOther;
@property (nonatomic, readonly) BOOL hasDeltaFromOriginal;

- (id)init;

@end
