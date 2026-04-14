@class NSUUID, NSMutableDictionary;

@interface ManagedStreamGroup : NSObject

@property (retain, nonatomic) NSUUID *controllingClientID;
@property (retain, nonatomic) NSMutableDictionary *outputStreams;
@property (retain, nonatomic) NSMutableDictionary *inputStreams;
@property (copy, nonatomic) id /* block */ stateChangeBlock;

- (void).cxx_destruct;
- (id)init;

@end
