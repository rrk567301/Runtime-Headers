@class NSString, NSNumber;
@protocol AMSBagProtocol;

@interface AMSClipMediaURLBuilder : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *externalVersionID;

- (void).cxx_destruct;
- (id)build;
- (id)_devicePlatform;
- (id)initWithBundleID:(id)a0 bag:(id)a1;
- (id)_hostPromise;
- (id)_pathPromise;
- (id)_queryPromise;

@end
