@class NSArray;

@interface SCContentSharingPickerConfiguration : NSObject

@property (nonatomic) unsigned long long excludedPickingModes;
@property (nonatomic) unsigned long long allowedPickingModes;
@property (nonatomic) char allowsRepicking;
@property (nonatomic) unsigned long long allowedPickerModes;
@property (retain, nonatomic) NSArray *excludedWindowIDs;
@property (retain, nonatomic) NSArray *excludedBundleIDs;
@property (nonatomic) char allowsChangingSelectedContent;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)serialize;

@end
