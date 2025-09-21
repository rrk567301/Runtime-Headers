@class NSString, SCContentSharingPickerConfiguration, NSMutableArray, NSNumber;

@interface SCContentSharingPickerInfo : NSObject

@property (retain, nonatomic) NSMutableArray *streams;
@property (retain, nonatomic) NSString *presentingBundleID;
@property (nonatomic) char active;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *maxStreamCount;
@property (nonatomic) unsigned long long excludedPickingModes;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *configuration;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *defaultConfiguration;
@property (nonatomic) char canShare;
@property (nonatomic) char canShareApplication;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)serialize;
- (char)isEqualToPickerInfo:(id)a0;

@end
