@protocol CNContactPosterUnifiedContactIdentifierExpansion;

@interface CNUnifiedContactPosterDataRequestFactory : NSObject {
    id<CNContactPosterUnifiedContactIdentifierExpansion> _expander;
}

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createImages:(id)a0 forContact:(id)a1;
- (id)createPosters:(id)a0 forContact:(id)a1;
- (id)currentImagesForContactWithIdentifier:(id)a0;
- (id)currentPostersForContactWithIdentifier:(id)a0;
- (id)initWithIdentifierExpander:(id)a0;
- (id)preferredIdentifierForImagesForContact:(id)a0;
- (id)recentImagesForContact:(id)a0;
- (id)recentImagesForContactWithIdentifier:(id)a0;
- (id)recentPostersForContact:(id)a0;
- (id)recentPostersForContactWithIdentifier:(id)a0;

@end
