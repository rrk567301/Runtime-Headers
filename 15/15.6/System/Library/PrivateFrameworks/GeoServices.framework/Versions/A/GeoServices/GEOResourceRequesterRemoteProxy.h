@class NSString;

@interface GEOResourceRequesterRemoteProxy : NSObject <GEOResourceRequesterProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResources:(id)a0 force:(char)a1 unpack:(char)a2 manifestConfiguration:(id)a3 auditToken:(id)a4 signpostID:(unsigned long long)a5 queue:(id)a6 handler:(id /* block */)a7;
- (void)reportCorruptUnpackedResource:(id)a0 fileURL:(id)a1;

@end
