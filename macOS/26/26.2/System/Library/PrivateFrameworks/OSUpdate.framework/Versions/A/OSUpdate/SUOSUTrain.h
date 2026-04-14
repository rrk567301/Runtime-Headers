@class NSString, NSArray;

@interface SUOSUTrain : NSObject

@property (retain) NSString *trainName;
@property (retain) NSString *productMarketingVersion;
@property (retain) NSArray *servers;

+ (id)productMarketingVersionForTrain:(id)a0;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
