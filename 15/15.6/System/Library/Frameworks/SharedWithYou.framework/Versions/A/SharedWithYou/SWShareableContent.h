@class LPLinkMetadata, NSString, NSArray, NSItemProvider, NSURL, NSPersonNameComponents;
@protocol SWShareableContentRepresentationProvider;

@interface SWShareableContent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceSceneIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *representations;
@property (retain, nonatomic) id<SWShareableContentRepresentationProvider> representationProvider;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) char hasPossibleCollaborationRepresentation;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSURL *highlightURL;
@property (readonly, copy, nonatomic) NSString *initiatorHandle;
@property (readonly, nonatomic) NSPersonNameComponents *initiatorNameComponents;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canLoadObjectOfClass:(Class)a0;
- (id)registeredTypeIdentifiers;
- (id)sourceIdentifier;
- (id)sourceApplicationIdentifier;
- (char)hasRepresentationConformingToTypeIdentifier:(id)a0;
- (id)initWithSourceSceneIdentifier:(id)a0 sourceBundleIdentifier:(id)a1 metadata:(id)a2 representations:(id)a3 highlightURL:(id)a4 initiatorHandle:(id)a5 initiatorNameComponents:(id)a6;
- (void)loadRepresentationForTypeIdentifier:(id)a0 itemProviderIndex:(long long)a1 completionHandler:(id /* block */)a2;
- (id)registeredOpenInPlaceTypeIdentifiers;

@end
