@class NSArray, CNPair;

@interface CNCDIOSLegacyIdentifierTargetRecords : NSObject

@property (readonly) CNPair *contactPair;
@property (readonly) CNPair *groupPair;
@property (readonly) CNPair *containerPair;
@property (readonly) CNPair *infoPair;
@property (readonly) CNPair *multivaluePair;
@property (readonly) NSArray *classPairs;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)init;

@end
