@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor>

@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) unsigned long long visibleSectionConfigsLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueueConfig:(id)a0 appConfiguration:(id)a1 todayData:(id)a2 inFavoritesOnlyMode:(char)a3 respectsWidgetVisibleSectionsLimit:(char)a4 groupingService:(id)a5;

@end
