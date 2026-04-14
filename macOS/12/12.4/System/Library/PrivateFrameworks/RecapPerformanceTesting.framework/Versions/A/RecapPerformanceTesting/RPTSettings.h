@class NSURL;

@interface RPTSettings : NSObject

@property (class, readonly) RPTSettings *processEnvironment;

@property (retain, nonatomic) NSURL *recapOverrideFileURL;

- (id)init;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
