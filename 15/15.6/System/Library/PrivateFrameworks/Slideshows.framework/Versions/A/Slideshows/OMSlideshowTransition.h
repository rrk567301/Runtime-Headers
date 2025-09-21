@class NSString;

@interface OMSlideshowTransition : NSObject

@property (readonly) NSString *transitionID;
@property (readonly) NSString *localizedName;
@property (readonly) char supportsSetSpeed;
@property (readonly) unsigned long long supportedDirections;

+ (id)transitionWithID:(id)a0 localizedName:(id)a1 supportsSetSpeed:(char)a2 supportedDirections:(unsigned long long)a3;

- (id)description;

@end
