@interface MEFormatReaderInstantiationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) char allowIncrementalFragmentParsing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithAllowIncrementalFragmentParsingOption:(char)a0;
- (id)initWithAllowIncrementalFragmentParsingOptionInternal:(char)a0;

@end
