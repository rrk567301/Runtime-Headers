@class NSString, NSArray, NSDate, CLLocation;

@interface OKMediaItemMetadata : NSObject

@property unsigned long long type;
@property unsigned long long subType;
@property struct CGSize { double width; double height; } resolution;
@property (retain) NSDate *creationDate;
@property unsigned long long orientation;
@property double duration;
@property double displayTime;
@property double latitude;
@property double longitude;
@property char opaque;
@property (copy) NSString *UTI;
@property (copy) NSString *name;
@property (copy) NSString *caption;
@property char regionsOfInterestDetected;
@property (copy) NSArray *regionsOfInterest;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterestContainerBounds;
@property (readonly) double aspectRatio;
@property (readonly) CLLocation *location;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } locationCoordinate;
@property (readonly) char hasRegionsOfInterest;
@property (readonly) char hasRegionsOfInterestName;
@property (readonly) NSArray *regionsOfInterestName;

+ (id)keyPathsForValuesAffectingAspectRatio;
+ (unsigned long long)alignResolution:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterest;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingLocationCoordinate;
+ (id)keyPathsForValuesAffectingRegionsOfInterestName;

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void)invalidate;
- (id)initWithFileURL:(id)a0;
- (void)setPropertiesFromDictionary:(id)a0;
- (char)isMediaSubtype:(unsigned long long)a0;
- (id)dictionaryValueForKey:(id)a0;
- (char)writeToFileURL:(id)a0;
- (unsigned long long)bestResolutionForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 quality:(double)a2;
- (id)regionsOfInterestDictionary;

@end
