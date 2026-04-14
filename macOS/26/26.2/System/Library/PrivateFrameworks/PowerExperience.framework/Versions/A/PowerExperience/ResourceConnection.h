@class NSMutableDictionary, NSXPCConnection;

@interface ResourceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *resourceHints;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)createResourceHint:(id)a0;
- (void)restoreResourceHints:(id)a0;
- (BOOL)updateResourceHint:(id)a0;

@end
