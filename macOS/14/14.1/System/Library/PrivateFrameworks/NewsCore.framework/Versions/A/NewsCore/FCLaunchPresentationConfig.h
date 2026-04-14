@class NSArray;

@interface FCLaunchPresentationConfig : NSObject

@property (nonatomic) long long configVersion;
@property (retain, nonatomic) NSArray *presentationOperations;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
