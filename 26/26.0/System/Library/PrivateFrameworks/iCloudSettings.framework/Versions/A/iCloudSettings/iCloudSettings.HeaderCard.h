@class NSString, _TtC14iCloudSettings14StorageSummary, _TtC14iCloudSettings14StatefulHeader;

@interface iCloudSettings.HeaderCard : NSObject {
    void /* function */ storageState;
}

@property (nonatomic, readonly) BOOL isiCloudPlusSubscriber;
@property (nonatomic, readonly) NSString *storageState;
@property (nonatomic, readonly) _TtC14iCloudSettings14StorageSummary *storageSummary;
@property (nonatomic, readonly) _TtC14iCloudSettings14StatefulHeader *statefulHeader;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
