@class NSString, CCQuicklookContext;
@protocol MTLRasterizationRateMap;

@interface CCRasterizationRateMapQuicklook : NSObject <CCVisitable, NSCopying> {
    id<MTLRasterizationRateMap> _rasterizationRateMap;
    NSString *_name;
    CCQuicklookContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRasterizationRateMap:(id)a0 name:(id)a1 context:(id)a2;
- (id)textureHTML;

@end
