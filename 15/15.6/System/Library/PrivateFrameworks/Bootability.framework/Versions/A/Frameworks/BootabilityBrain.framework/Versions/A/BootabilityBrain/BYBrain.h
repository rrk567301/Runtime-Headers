@interface BYBrain : NSObject

- (id)firstSystemVolumeMountPoint;
- (char)verifyManifest:(id)a0 personalized:(char)a1 restoreBundle:(id)a2 error:(id *)a3;
- (char)makeVolumeBootable:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (char)makeVolumeBootableWithGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (char)prepareVolumeForMediumSecuritySoftwareUpdate:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (char)prepareVolumeForMediumSecurityUpdateWithGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;

@end
