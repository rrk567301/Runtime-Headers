@class NSNumber;

@interface DGChromaticAberrationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRedCyan;
@property (copy, nonatomic) NSNumber *inputBlueYellow;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (BOOL)allowDough;
- (BOOL)needsInputImageWithoutGeometry;

@end
