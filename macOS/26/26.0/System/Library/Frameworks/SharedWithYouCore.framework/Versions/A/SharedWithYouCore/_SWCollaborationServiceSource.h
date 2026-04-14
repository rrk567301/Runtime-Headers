@interface _SWCollaborationServiceSource : _SWBaseCollaborationSource <_SWCollaborationService>

- (id)requiredEntitlement;
- (id)serviceName;
- (id)interface;
- (void)collaborationMetadataWithCompletionHandler:(id /* block */)a0;

@end
