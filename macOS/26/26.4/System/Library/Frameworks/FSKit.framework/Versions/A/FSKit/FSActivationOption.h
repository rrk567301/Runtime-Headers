@class NSString;

@interface FSActivationOption : NSObject

@property (retain) NSString *name;
@property long long argumentType;
@property (retain) NSString *defaultValue;

+ (id)optionWithName:(id)a0 argumentType:(long long)a1 defaultValue:(id)a2;

- (void).cxx_destruct;

@end
