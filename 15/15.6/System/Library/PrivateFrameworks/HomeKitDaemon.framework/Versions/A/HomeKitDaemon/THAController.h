@class NSSet, NSString;

@interface THAController : NSObject

@property (retain, nonatomic) NSSet *selectedButtons;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int identifier;
@property (nonatomic) unsigned long long ticksPerSecond;
@property (nonatomic) char supportsSiri;
@property (nonatomic) char connected;
@property (nonatomic) char selected;

+ (id)selectButtonConfiguration:(id)a0 supportsSiri:(char)a1;

- (void).cxx_destruct;
- (char)dispatchButtonEvent:(id)a0;
- (id)initWithName:(id)a0 identifier:(unsigned int)a1 ticksPerSecond:(unsigned long long)a2 supportedButtons:(id)a3 supportsSiri:(char)a4;
- (void)updateSelectedButtons:(id)a0;

@end
