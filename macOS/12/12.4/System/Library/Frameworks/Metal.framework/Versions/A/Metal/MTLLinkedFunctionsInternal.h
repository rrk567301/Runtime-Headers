@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEmpty;
- (id)formattedDescription:(unsigned long long)a0;
- (id)binaryFunctions;
- (id)functions;
- (void)setFunctions:(id)a0;
- (id)privateFunctions;
- (void)setPrivateFunctions:(id)a0;
- (void)setBinaryFunctions:(id)a0;
- (id)groups;
- (void)setGroups:(id)a0;

@end
