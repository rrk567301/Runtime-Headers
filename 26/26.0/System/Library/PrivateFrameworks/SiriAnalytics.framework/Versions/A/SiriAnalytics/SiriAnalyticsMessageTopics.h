@class SiriAnalyticsDirectUploadTopic;

@interface SiriAnalyticsMessageTopics : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

@property (nonatomic, readonly) SiriAnalyticsDirectUploadTopic *directUpload;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFbfStorage:(id)a0 messageTailing:(id)a1 rawStream:(id)a2 messageStore:(id)a3;

@end
