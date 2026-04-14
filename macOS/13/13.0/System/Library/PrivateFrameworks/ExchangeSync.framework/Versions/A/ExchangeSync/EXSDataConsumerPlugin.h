@class NSBundle;

@interface EXSDataConsumerPlugin : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) long long interestedDataclass;
@property (nonatomic) long long interestedFolderType;
@property (readonly, nonatomic) Class dataConsumerClass;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)newInstanceForAccount:(id)a0 withDataManager:(id)a1 dispatchWorkloop:(id)a2;
- (BOOL)interestedInEnabledDataclasses:(unsigned long long)a0;

@end
