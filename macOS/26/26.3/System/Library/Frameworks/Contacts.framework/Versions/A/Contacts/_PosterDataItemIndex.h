@class NSString, NSMutableDictionary;

@interface _PosterDataItemIndex : NSObject <CNContactPosterDataItemVisitor> {
    NSMutableDictionary *_posterIndex;
    NSMutableDictionary *_imageIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)visitImage:(id)a0;
- (id)posterForContactWithIdentifier:(id)a0;
- (void)applyPosterDataForAvailableKeys:(id)a0 toNonUnifiedContact:(id)a1;
- (id)imageForContactWithIdentifier:(id)a0;
- (void)indexItems:(id)a0;
- (void)visitPoster:(id)a0;

@end
