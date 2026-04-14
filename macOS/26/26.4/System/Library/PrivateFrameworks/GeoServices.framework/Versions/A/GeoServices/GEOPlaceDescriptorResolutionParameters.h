@class NSArray, GEOLocation, NSString;

@interface GEOPlaceDescriptorResolutionParameters : NSObject

@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSArray *formattedAddress;
@property (retain, nonatomic) NSString *placeNameHint;
@property (retain, nonatomic) NSArray *preferredTypes;

- (void).cxx_destruct;

@end
