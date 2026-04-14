@class AVTPreset, NSString;

@interface AVTPresetStoreDependencyCondition : NSObject

@property (retain, nonatomic) AVTPreset *presetOfOtherCategory;
@property (retain, nonatomic) NSString *specificPresetIdentifier;

- (id)displayString;
- (void).cxx_destruct;

@end
