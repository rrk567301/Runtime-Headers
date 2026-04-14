@class NSString;

@interface MLEQPreset : NSObject {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForName:(id)a0;
+ (id)eqPresetForBuiltInPresetType:(int)a0;

- (id)name;
- (void).cxx_destruct;
- (id)localizedName;
- (id)initWithBuiltInPresetType:(int)a0;
- (int)builtInPresetType;
- (int)typeForAVController;

@end
