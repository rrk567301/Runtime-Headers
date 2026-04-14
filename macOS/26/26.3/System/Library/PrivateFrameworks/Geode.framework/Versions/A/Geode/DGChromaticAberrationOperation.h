@class NSNumber;

@interface DGChromaticAberrationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRedCyan;
@property (copy, nonatomic) NSNumber *inputBlueYellow;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (id)_filter;
- (void)dealloc;
- (BOOL)allowDough;
- (BOOL)needsInputImageWithoutGeometry;

@end
