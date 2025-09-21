@class NSString, NSArray, CRNormalizedQuad;

@interface TextGrouping : NSObject <CRTextGrouping>

@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) NSArray *subregions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextElement:(id)a0 text:(id)a1;

@end
