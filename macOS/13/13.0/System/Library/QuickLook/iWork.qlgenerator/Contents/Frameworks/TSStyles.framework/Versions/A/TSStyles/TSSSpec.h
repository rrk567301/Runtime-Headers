@class NSString;

@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)apply:(id)a0;
- (id)initWithCurrentProperty:(id)a0;
- (id)initUnsetSpec;
- (id)specWithCurrentProperty:(id)a0;
- (id)getUnsetSpec;
- (BOOL)isUnsetSpec;
- (BOOL)canApplyOnObject:(id)a0;

@end
