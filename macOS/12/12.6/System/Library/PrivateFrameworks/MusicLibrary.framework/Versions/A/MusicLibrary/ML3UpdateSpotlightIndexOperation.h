@class NSString;

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long bundle;
@property (nonatomic) unsigned long long batchCount;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;

@end
