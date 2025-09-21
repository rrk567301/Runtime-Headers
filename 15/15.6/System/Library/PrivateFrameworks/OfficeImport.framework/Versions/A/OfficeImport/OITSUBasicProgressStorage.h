@interface OITSUBasicProgressStorage : NSObject

@property double value;
@property double maxValue;
@property (getter=isIndeterminate) char indeterminate;

@end
