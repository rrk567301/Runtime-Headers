@class LPLinkMetadata, NSString, NSArray, NSItemProvider;
@protocol SWShareableContentRepresentationProvider;

@interface SWShareableContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceSceneIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *registeredTypeIdentifiers;
@property (retain, nonatomic) id<SWShareableContentRepresentationProvider> representationProvider;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) BOOL hasPossibleCollaborationRepresentation;
@property (readonly, nonatomic) NSItemProvider *itemProvider;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canLoadObjectOfClass:(Class)a0;
- (void)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)sourceIdentifier;
- (id)sourceApplicationIdentifier;
- (id)initWithSourceSceneIdentifier:(id)a0 sourceBundleIdentifier:(id)a1 metadata:(id)a2 registeredTypeIdentifiers:(id)a3;
- (BOOL)hasRepresentationConformingToTypeIdentifier:(id)a0;

@end
