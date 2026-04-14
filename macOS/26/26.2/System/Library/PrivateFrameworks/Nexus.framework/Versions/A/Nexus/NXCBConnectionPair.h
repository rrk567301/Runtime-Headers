@class CBConnection;

@interface NXCBConnectionPair : NSObject

@property (retain, nonatomic) CBConnection *connection1;
@property (retain, nonatomic) CBConnection *connection2;

- (void).cxx_destruct;

@end
