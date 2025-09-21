@class NSData, NSDictionary;

@interface CBPreset : NSObject {
    NSDictionary *_dict;
}

@property (readonly) char trueToneDisabled;
@property (readonly) char nightShiftDisabled;
@property (readonly) char autoBrighnessDisabled;
@property (readonly) char brightnessDisabled;
@property (readonly) char referenceMode;
@property (readonly) float maxSDRLuminance;
@property (readonly) NSData *identifier;

+ (id)newActive:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithDict:(id)a0;
- (char)isEqualToPreset:(id)a0;

@end
