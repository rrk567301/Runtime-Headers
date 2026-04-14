@class NSArray, NSString;

@interface IMPendingReplicatedMessageContext : NSObject

@property (retain, nonatomic) NSArray *fallbackGUIDs;
@property (copy, nonatomic) NSString *sourceServiceName;
@property (nonatomic) BOOL encrypted;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceName:(id)a0 fallbackGUIDs:(id)a1 encrypted:(BOOL)a2;

@end
