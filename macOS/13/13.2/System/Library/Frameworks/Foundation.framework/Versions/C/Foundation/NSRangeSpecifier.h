@class NSScriptObjectSpecifier;

@interface NSRangeSpecifier : NSScriptObjectSpecifier {
    NSScriptObjectSpecifier *_startSpec;
    NSScriptObjectSpecifier *_endSpec;
}

@property (retain) NSScriptObjectSpecifier *startSpecifier;
@property (retain) NSScriptObjectSpecifier *endSpecifier;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (BOOL)_specifiesSingleIndexedObjectPerContainer;
- (id)_simpleDescription;
- (id)_initFromRecord:(id)a0;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (id)_specifiedIndexesOfObjectsInContainer:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 startSpecifier:(id)a3 endSpecifier:(id)a4;

@end
