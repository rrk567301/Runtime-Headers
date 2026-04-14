@class NSString, CNCache, CNContact;

@interface CNUIPRLikenessSwiftUIAvatarProvider : NSObject <CNUIPRLikenessProvider> {
    CNContact *_contact;
    CNCache *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCNContact:(id)a0;
- (struct CGImage { } *)_cnui_imageForScope:(id)a0;
- (struct CGImage { } *)_cnui_imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
