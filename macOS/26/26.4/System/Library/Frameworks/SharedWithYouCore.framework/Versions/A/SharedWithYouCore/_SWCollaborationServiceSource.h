@interface _SWCollaborationServiceSource : _SWBaseCollaborationSource <_SWCollaborationService>

- (id)requiredEntitlement;
- (id)interface;
- (id)serviceName;
- (void)collaborationMetadataWithCompletionHandler:(id /* block */)a0;

@end
