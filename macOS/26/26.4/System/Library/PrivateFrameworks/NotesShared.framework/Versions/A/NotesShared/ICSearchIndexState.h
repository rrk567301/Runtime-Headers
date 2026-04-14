@class NSString;

@interface ICSearchIndexState : NSManagedObject

@property (nonatomic) short stateValue;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long progressState;

- (void).cxx_destruct;

@end
