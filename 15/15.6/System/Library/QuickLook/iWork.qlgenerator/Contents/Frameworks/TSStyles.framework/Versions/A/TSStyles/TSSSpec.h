@class NSString;

@interface TSSSpec : TSCKSosBase

@property (readonly) NSString *operationPropertyName;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)apply:(id)a0;
- (char)canApplyOnObject:(id)a0;
- (id)getUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)a0;
- (char)isUnsetSpec;
- (id)specWithCurrentProperty:(id)a0;

@end
