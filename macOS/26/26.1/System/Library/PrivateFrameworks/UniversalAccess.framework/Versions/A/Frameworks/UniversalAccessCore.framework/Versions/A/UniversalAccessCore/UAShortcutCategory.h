@class NSString, NSMutableArray, NSArray;

@interface UAShortcutCategory : NSObject

@property (copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSMutableArray *_mutableFeatures;
@property (nonatomic, setter=_setCategoryID:) unsigned long long _categoryID;
@property (readonly, copy, nonatomic) NSArray *features;

- (id)_init;
- (id)description;
- (void).cxx_destruct;

@end
