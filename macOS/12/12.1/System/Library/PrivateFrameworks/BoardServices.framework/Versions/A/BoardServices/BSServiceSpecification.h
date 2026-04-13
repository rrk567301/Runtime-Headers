@class NSString, NSDictionary;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {
    NSDictionary *_options;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isHiddenAtLaunch) BOOL hiddenAtLaunch;
@property (readonly, nonatomic, getter=isDerived) BOOL derived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)optionForKey:(id)a0;

@end
