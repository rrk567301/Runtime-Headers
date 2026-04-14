@class NSMutableArray, NSMutableDictionary;

@interface OKDocumentCouch : OKDocumentCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (readonly, copy, nonatomic) NSMutableArray *steps;

+ (id)couchWithName:(id)a0 settings:(id)a1 steps:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)duration;
- (id)init;
- (id)dictionary;
- (void)dealloc;
- (id)canvasWithName:(id)a0;
- (void)resolveIfNeeded;
- (id)closestStepForPageName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forDocument:(id)a2;
- (id)lastStepForPageName:(id)a0;

@end
