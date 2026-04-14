@class NSString;

@interface PFResourceAccessAction : PFAction <PFResourceAccessClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)executeUndo;
- (int)executeRedo;
- (void)resourceWillShutdown:(id)a0;
- (int)executeAction;
- (int)executeAction:(id /* block */)a0;
- (int)executeUndo:(id /* block */)a0;
- (int)executeRedo:(id /* block */)a0;
- (id)resourceObject;
- (BOOL)beginResourceAccess;
- (void)endResourceAccess;

@end
