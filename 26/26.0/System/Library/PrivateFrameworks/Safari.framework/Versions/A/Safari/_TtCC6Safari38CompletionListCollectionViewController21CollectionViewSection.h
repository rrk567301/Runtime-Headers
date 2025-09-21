@class NSString, NSArray;

@interface _TtCC6Safari38CompletionListCollectionViewController21CollectionViewSection : NSObject {
    void /* function */ sectionTitle;
    void /* function */ suggestions;
}

@property (nonatomic, readonly) NSString *sectionTitle;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long sectionIndexInCompletionListing;
@property (nonatomic, copy) NSArray *suggestions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 sectionIndexInCompletionListing:(long long)a1 suggestions:(id)a2 sectionType:(long long)a3;

@end
