@class NSArray, NSString, NSData;

@interface GEOSiriSyncHandlerHelper : NSObject

@property (readonly, nonatomic) NSArray *additionalEnabledMarkets;
@property (readonly, nonatomic) NSString *manifestEnvironment;
@property (readonly, nonatomic) NSData *clientMetadata;
@property (readonly, nonatomic) NSString *postAnchor;

- (void).cxx_destruct;
- (id)init;
- (void)notifySiriIfNecessary;

@end
