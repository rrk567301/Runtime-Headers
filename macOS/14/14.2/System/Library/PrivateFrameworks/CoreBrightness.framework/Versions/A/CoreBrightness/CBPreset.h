@class NSDictionary;

@interface CBPreset : NSObject {
    NSDictionary *_dict;
}

@property (readonly) BOOL trueToneDisabled;
@property (readonly) BOOL nightShiftDisabled;
@property (readonly) BOOL autoBrighnessDisabled;
@property (readonly) BOOL brightnessDisabled;
@property (readonly) BOOL referenceMode;

+ (id)newActive:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)initWithDict:(id)a0;

@end
