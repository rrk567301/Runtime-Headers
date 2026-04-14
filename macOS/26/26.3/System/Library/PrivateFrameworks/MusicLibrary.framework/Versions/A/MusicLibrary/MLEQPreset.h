@class NSString;

@interface MLEQPreset : NSObject {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForBuiltInPresetType:(int)a0;
+ (id)eqPresetForName:(id)a0;

- (id)localizedName;
- (id)name;
- (void).cxx_destruct;
- (int)builtInPresetType;
- (id)initWithBuiltInPresetType:(int)a0;
- (int)typeForAVController;

@end
