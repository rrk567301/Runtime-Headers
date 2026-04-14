@class NSNumber, NSArray, NSString;

@interface CHIPPluginReportDescription : HMFObject

@property (readonly) NSNumber *clusterId;
@property (readonly) NSArray *attributeIds;
@property (copy, nonatomic) id /* block */ mapValue;
@property (retain, nonatomic) NSString *clusterClass;
@property (retain, nonatomic) NSString *clusterSelector;

- (void).cxx_destruct;
- (id)initWithClusterId:(id)a0 attributeIds:(id)a1;

@end
