@class NSString;

@interface _SLSRemoteViewEventClientDefaultConfig : NSObject <SLSRemoteViewEventClientConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceInterface;
- (id)connection;

@end
