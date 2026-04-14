@class CBConnection;

@interface CBConnectionPair : NSObject

@property (retain, nonatomic) CBConnection *clientConnection;
@property (retain, nonatomic) CBConnection *serverConnection;

- (void).cxx_destruct;

@end
