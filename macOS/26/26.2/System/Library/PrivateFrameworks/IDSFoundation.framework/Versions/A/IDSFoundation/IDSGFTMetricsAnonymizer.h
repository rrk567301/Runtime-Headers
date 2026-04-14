@class NSMutableDictionary;

@interface IDSGFTMetricsAnonymizer : NSObject {
    unsigned long long _nextAnonymizedID;
    NSMutableDictionary *_assignedIDs;
}

- (void).cxx_destruct;
- (id)init;
- (id)anonymizeID:(id)a0;

@end
