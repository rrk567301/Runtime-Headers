@class NSArray, NSString;

@interface VESuperResolutionConfiguration : NSObject <VEConfiguration>

@property (class, readonly, nonatomic) NSArray *supportedScaleFactors;

@property (readonly, nonatomic) long long qualityPrioritization;
@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) long long inputType;
@property (readonly, nonatomic) BOOL usePrecomputedFlow;
@property (readonly, nonatomic) long long scaleFactor;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *framePreferredPixelFormats;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultRevision;
+ (id)supportedRevisions;
+ (BOOL)isSupportedRevision:(long long)a0;
+ (BOOL)isSupportedScaleFactor:(long long)a0;

@end
