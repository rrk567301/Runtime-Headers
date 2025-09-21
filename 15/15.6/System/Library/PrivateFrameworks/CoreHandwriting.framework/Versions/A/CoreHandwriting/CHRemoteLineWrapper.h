@class NSString, NSXPCConnection;

@interface CHRemoteLineWrapper : NSObject <CHLineWrapperProviding> {
    NSXPCConnection *_connection;
    char _enableCachingIfAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnableCachingIfAvailable:(char)a0;
- (char)isEqualToRemoteLineWrapper:(id)a0;
- (id)lineWrappingResultForGroups:(id)a0 options:(id)a1 error:(id *)a2;

@end
