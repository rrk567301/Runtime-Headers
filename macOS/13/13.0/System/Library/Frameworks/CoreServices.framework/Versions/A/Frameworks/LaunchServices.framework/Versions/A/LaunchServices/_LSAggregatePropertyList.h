@class NSArray;

@interface _LSAggregatePropertyList : _LSLazyPropertyList {
    NSArray *_plists;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void)prewarm;
- (id)initWithLazyPropertyLists:(id)a0;

@end
