@class NSArray;

@interface RTPlaceInferenceUpdateNotification : RTNotification

@property (readonly, nonatomic) NSArray *placeInferences;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlaceInferences:(id)a0;

@end
