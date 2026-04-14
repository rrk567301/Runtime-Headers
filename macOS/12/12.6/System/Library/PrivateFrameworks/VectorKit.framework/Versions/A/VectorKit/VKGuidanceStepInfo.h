@class NSString;

@interface VKGuidanceStepInfo : NSObject

@property (readonly, retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) int routePoint;

- (void)dealloc;
- (id)initWithRoadName:(id)a0 point:(int)a1;

@end
