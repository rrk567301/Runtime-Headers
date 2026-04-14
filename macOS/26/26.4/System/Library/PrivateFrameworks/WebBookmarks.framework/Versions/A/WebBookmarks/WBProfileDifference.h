@class NSSet;

@interface WBProfileDifference : NSObject

@property (readonly, nonatomic) unsigned long long result;
@property (readonly, copy, nonatomic) NSSet *settingsKeys;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResult:(unsigned long long)a0 settingsKeys:(id)a1;

@end
