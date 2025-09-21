@class NSDictionary, NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject

@property (readonly, nonatomic) NSDictionary *fieldSpecsByName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) char isInputModeRequired;
@property (readonly, nonatomic) NSArray *fieldSpecs;

+ (id)eventSpecWithName:(id)a0 inputModeRequired:(char)a1;
+ (id)eventSpecWithName:(id)a0 inputModeRequired:(char)a1 fieldSpecs:(id)a2;

- (void).cxx_destruct;
- (id)fieldSpecWithName:(id)a0;
- (id)initWithName:(id)a0 inputModeRequired:(char)a1 fieldSpecs:(id)a2;

@end
