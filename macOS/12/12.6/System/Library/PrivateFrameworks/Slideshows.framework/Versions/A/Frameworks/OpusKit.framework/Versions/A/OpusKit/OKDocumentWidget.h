@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKDocumentWidget : OKDocumentCanvas {
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalSubWidgets;
}

@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSMutableArray *subWidgets;

+ (id)widgetWithName:(id)a0 templateName:(id)a1 className:(id)a2 settings:(id)a3 userData:(id)a4 subWidgets:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)dictionary;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 forDocument:(id)a1 andParent:(id)a2;
- (id)subWidgetWithName:(id)a0;
- (id)parentPage;
- (id)parentWidget;
- (id)widgetTemplate;
- (id)canvasWithName:(id)a0;

@end
