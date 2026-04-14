@class NSURL;

@interface RPTSettings : NSObject

@property (class, readonly) RPTSettings *processEnvironment;

@property (retain, nonatomic) NSURL *recapOverrideFileURL;
@property (nonatomic) long long activationIterationCount;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)init;

@end
