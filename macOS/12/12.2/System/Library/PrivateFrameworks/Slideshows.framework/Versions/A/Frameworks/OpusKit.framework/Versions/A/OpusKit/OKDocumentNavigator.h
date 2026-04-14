@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKDocumentNavigator : OKDocumentCanvas {
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}

@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSMutableArray *pagesNames;

+ (id)navigatorWithName:(id)a0 className:(id)a1 pagesNames:(id)a2 settings:(id)a3 userData:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)dictionary;
- (id)pages;
- (void)resolveIfNeeded;
- (id)pageWithName:(id)a0;
- (id)parentPage;
- (id)canvasWithName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forDocument:(id)a2 andParent:(id)a3;

@end
