@class NSArray;

@interface _LSAggregatePropertyList : _LSLazyPropertyList {
    NSArray *_plists;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prewarm;
- (char)_getPropertyList:(id *)a0;
- (char)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)initWithLazyPropertyLists:(id)a0;

@end
