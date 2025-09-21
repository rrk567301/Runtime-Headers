@class NSNumber, NSString;

@interface ISFallbackIconScaleDown : NSObject <ISLightFallbackIcon, ISDarkFallbackIcon, ISTintedFallbackIcon>

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) NSNumber *cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImage:(struct CGImage { } *)a0 cornerRadius:(id)a1;

@end
