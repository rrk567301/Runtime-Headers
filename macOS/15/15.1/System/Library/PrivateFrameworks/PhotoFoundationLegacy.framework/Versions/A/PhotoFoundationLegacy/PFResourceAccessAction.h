@class NSString;

@interface PFResourceAccessAction : PFAction <PFResourceAccessClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)executeRedo;
- (int)executeUndo;
- (int)executeAction;
- (int)executeAction:(id /* block */)a0;
- (BOOL)beginResourceAccess;
- (void)endResourceAccess;
- (int)executeRedo:(id /* block */)a0;
- (int)executeUndo:(id /* block */)a0;
- (id)resourceObject;
- (void)resourceWillShutdown:(id)a0;

@end
