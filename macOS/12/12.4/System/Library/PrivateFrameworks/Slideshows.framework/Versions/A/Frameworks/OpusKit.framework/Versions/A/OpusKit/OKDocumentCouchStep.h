@class NSString, NSMutableDictionary;

@interface OKDocumentCouchStep : OKDocumentCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (readonly, copy, nonatomic) NSString *anchorPage;
@property (readonly, copy, nonatomic) NSString *script;
@property (readonly, nonatomic) double duration;

+ (id)couchStepWithAnchorPageName:(id)a0 script:(id)a1 duration:(double)a2 settings:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)dictionary;
- (id)nextStep;
- (void)resolveIfNeeded;
- (id)parentCouch;
- (id)initWithDictionary:(id)a0 forDocument:(id)a1 andCouch:(id)a2;

@end
