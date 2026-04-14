@class NSColor, NSNumber;

@interface DGColorMonochromeOperation : DGOperation

@property (copy, nonatomic) NSColor *inputColor;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)dealloc;
- (id)init;

@end
