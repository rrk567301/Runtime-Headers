@interface HKFeatureAvailabilityContextConstraint : NSObject <NSCopying> {
    id /* block */ _acceptsContext;
}

+ (id)allContexts;
+ (id)onlySomeContexts:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)acceptsContext:(id)a0;
- (id)initWithAcceptsContext:(id /* block */)a0;

@end
