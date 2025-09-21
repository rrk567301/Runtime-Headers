@class NSString, NSUUID;

@interface GCOverlayProfile : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1;

@end
