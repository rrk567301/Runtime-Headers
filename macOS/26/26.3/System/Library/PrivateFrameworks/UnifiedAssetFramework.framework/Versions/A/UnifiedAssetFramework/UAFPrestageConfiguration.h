@class NSString, NSArray, NSDictionary;

@interface UAFPrestageConfiguration : NSObject {
    NSDictionary *_predicateKeys;
    NSString *_currentOSVersion;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *subscriptions;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)computePredicateKeys;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (BOOL)predicateMatch:(id)a0 predicateKeys:(id)a1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)osVersionConfigMatch:(id)a0;
- (id)subscriptions:(id)a0;

@end
