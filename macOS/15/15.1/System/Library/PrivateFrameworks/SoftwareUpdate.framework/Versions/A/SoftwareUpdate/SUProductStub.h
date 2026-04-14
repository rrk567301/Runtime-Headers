@class NSString;

@interface SUProductStub : NSObject

@property (retain) NSString *productKey;
@property (retain) NSString *displayName;
@property (retain) NSString *displayVersion;

- (id)init;
- (id)toProduct;

@end
