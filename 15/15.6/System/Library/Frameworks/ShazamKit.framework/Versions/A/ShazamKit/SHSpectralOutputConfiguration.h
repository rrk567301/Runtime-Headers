@interface SHSpectralOutputConfiguration : NSObject

@property (readonly) long long numberOfBins;
@property (readonly) long long callbackFrequency;

+ (char)validateCallbackFrequency:(long long)a0;
+ (char)validateNumberOfBins:(long long)a0;

- (id)init;
- (id)initWithNumberOfBins:(long long)a0 callbackFrequency:(long long)a1;

@end
