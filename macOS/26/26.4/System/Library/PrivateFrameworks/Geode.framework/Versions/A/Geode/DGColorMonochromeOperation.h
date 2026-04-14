@class NSColor, NSNumber;

@interface DGColorMonochromeOperation : DGOperation

@property (copy, nonatomic) NSColor *inputColor;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;

@end
