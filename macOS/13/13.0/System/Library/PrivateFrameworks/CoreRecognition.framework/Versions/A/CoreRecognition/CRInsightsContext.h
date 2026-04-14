@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (weak, nonatomic) CRCameraReader *cameraReader;

- (id)description;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)valueForKey:(id)a0;

@end
