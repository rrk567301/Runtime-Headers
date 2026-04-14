@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)groups;
- (void)setFunctions:(id)a0;
- (void)setGroups:(id)a0;
- (id)functions;
- (id)privateFunctions;
- (void)setPrivateFunctions:(id)a0;
- (id)binaryFunctions;
- (void)setBinaryFunctions:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;

@end
