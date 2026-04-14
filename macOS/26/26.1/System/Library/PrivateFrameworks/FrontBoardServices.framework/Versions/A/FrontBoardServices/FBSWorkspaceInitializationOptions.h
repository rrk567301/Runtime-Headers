@class BSServiceQueue;
@protocol FBSWorkspaceDelegate;

@interface FBSWorkspaceInitializationOptions : NSObject

@property (nonatomic, getter=isEndpointMonitoringEnabled) BOOL endpointMonitoringEnabled;
@property (nonatomic, getter=isDefaultShellEndpointEnabled) BOOL defaultShellEndpointEnabled;
@property (readonly, nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (retain, nonatomic) BSServiceQueue *callOutQueue;

+ (id)optionsWithDelegate:(id)a0;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_initWithDelegate:(id)a0;
- (id)init;

@end
