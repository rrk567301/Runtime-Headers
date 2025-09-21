@class NSString, NSSet;

@interface ATXIntentMetadataCacheKey : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) NSSet *nonNilParameters;
@property (readonly, nonatomic) unsigned long long intentHash;
@property (readonly, nonatomic) NSString *localeIdentifier;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 includingParameterValues:(char)a1 localeIdentifier:(id)a2;
- (id)initWithIntent:(id)a0 includingParameters:(char)a1;
- (id)initWithIntent:(id)a0 includingParameters:(char)a1 includingParameterValues:(char)a2 localeIdentifier:(id)a3;
- (id)stringRepresentationForSerialization;

@end
