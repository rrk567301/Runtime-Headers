@class NSString, NSArray;

@interface BSXPCCodingArray : NSObject <NSFastEnumeration, NSCopying, BSXPCCoding, BSDescriptionProviding> {
    NSArray *_array;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithArray:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)count;
- (id)initWithXPCDictionary:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)array;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
