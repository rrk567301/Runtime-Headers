@class NSMutableDictionary, NSXPCConnection;

@interface ResourceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *resourceHints;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)createResourceHint:(id)a0;
- (void)restoreResourceHints:(id)a0;
- (char)updateResourceHint:(id)a0;

@end
