@class NSString, NSXPCConnection;

@interface CHRemoteLineWrapper : NSObject <CHLineWrapperProviding> {
    NSXPCConnection *_connection;
    BOOL _enableCachingIfAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEnableCachingIfAvailable:(BOOL)a0;
- (BOOL)isEqualToRemoteLineWrapper:(id)a0;
- (id)lineWrappingResultForGroups:(id)a0 options:(id)a1 error:(id *)a2;

@end
