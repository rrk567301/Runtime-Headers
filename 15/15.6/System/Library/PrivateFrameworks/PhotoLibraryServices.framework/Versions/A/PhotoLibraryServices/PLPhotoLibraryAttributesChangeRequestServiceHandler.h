@class PLPhotoLibraryAttributesChanges, NSString;
@protocol PLClientAuthorization;

@interface PLPhotoLibraryAttributesChangeRequestServiceHandler : NSObject <PLChangeRequestServiceHandling> {
    id<PLClientAuthorization> _clientAuthorization;
}

@property (readonly) PLPhotoLibraryAttributesChanges *changes;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)applyChangesWithLibrary:(id)a0 error:(id *)a1;
- (id)initWithPhotoLibraryAttributesChanges:(id)a0 clientAuthorization:(id)a1;
- (char)_updateDataclass:(id)a0 onAccount:(id)a1 enabled:(char)a2;
- (char)validateChangesWithLibrary:(id)a0 error:(id *)a1;

@end
