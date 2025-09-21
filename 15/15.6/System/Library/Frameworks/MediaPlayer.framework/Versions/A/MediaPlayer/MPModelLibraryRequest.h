@class NSArray, MPMediaLibrary, NSString, MPMediaQuery;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting>

@property (readonly, nonatomic) char isUpgradedSmartPlaylistLegacyMediaQuery;
@property (readonly, nonatomic) MPMediaLibrary *_mediaLibrary;
@property (copy, nonatomic) NSArray *itemPropertyFilters;
@property (copy, nonatomic) NSArray *sectionPropertyFilters;
@property (copy, nonatomic) MPMediaQuery *legacyMediaQuery;
@property (nonatomic) char disableImplicitSectioning;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (nonatomic) unsigned long long filteringOptions;
@property (copy, nonatomic) NSString *filterText;
@property (copy, nonatomic) NSString *sectionFilterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) char wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) char sortUsingAllowedItemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void)setLegacyMediaQuery:(id)a0 forTransport:(char)a1;

@end
