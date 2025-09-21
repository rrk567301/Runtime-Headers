@class NSString, NSDictionary, MPMediaLibrary, NSMutableDictionary, MPSectionedCollection, ICUserIdentity;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
}

@property (readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (retain, nonatomic) MPMediaLibrary *mediaLibraryOverrideForTestingOnly;
@property (nonatomic) char matchAlbumArtistsOnNameAndStoreID;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (retain, nonatomic) MPSectionedCollection *representedObjects;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (char)requiresNetwork;
+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1;
+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1 matchAlbumArtistOnStoreIdAndName:(char)a2;
+ (id)preferredQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUnpersonalizedRequest:(id)a0 unpersonalizedContentDescriptors:(id)a1;
- (id)initWithUnpersonalizedContentDescriptors:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)propertiesForItemAtIndexPath:(id)a0;
- (void)setProperties:(id)a0 forItemAtIndexPath:(id)a1;

@end
