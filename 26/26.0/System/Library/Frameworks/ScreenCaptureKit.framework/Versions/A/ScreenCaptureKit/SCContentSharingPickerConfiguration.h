@class NSArray;

@interface SCContentSharingPickerConfiguration : NSObject

@property (nonatomic) unsigned long long excludedPickingModes;
@property (nonatomic) unsigned long long allowedPickingModes;
@property (nonatomic) BOOL allowsRepicking;
@property (nonatomic) unsigned long long allowedPickerModes;
@property (retain, nonatomic) NSArray *excludedWindowIDs;
@property (retain, nonatomic) NSArray *excludedBundleIDs;
@property (nonatomic) BOOL allowsChangingSelectedContent;

+ (void)updateMediaAttributionWithAuditToken:(struct { unsigned int x0[8]; })a0 completionHandler:(id /* block */)a1;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
