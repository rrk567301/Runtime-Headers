@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (id)remoteObjectInterface;
- (void)fetchConfigurationForClass:(id)a0 completion:(id /* block */)a1;
- (void)fetchGenderAndAgeGroupData:(id /* block */)a0;
- (void)connectionInvalidated;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (id)init;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;
- (void)invokeTestingRigHandlerForMessage:(id)a0 payload:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectionInterrupted;
- (id)fetchGenderAndAgeGroupData;
- (void)policiesToEnforce:(id /* block */)a0;

@end
