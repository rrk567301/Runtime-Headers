@class NSArray, NSString;

@interface GDVisualIdentifierViewLocation : GDLocation

@property (retain, nonatomic) NSArray *names;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) NSArray *addresses;

- (void).cxx_destruct;
- (id)description;

@end
