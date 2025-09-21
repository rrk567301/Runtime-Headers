@class NSNumber;

@interface DGChromaticAberrationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRedCyan;
@property (copy, nonatomic) NSNumber *inputBlueYellow;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;
- (BOOL)allowDough;
- (BOOL)needsInputImageWithoutGeometry;

@end
