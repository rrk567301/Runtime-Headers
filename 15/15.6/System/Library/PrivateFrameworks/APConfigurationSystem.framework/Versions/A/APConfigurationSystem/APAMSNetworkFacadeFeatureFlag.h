@class NSNumber;

@interface APAMSNetworkFacadeFeatureFlag : APConfiguration

@property (readonly, nonatomic) NSNumber *urlSessionPreconnectEnabled;
@property (readonly, nonatomic) NSNumber *urlSessionSharingEnabled;

+ (id)path;

@end
