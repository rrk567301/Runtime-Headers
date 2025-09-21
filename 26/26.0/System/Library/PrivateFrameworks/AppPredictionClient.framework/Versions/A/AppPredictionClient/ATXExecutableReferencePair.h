@class ATXExecutableReference, ATXExecutableIdentifier;

@interface ATXExecutableReferencePair : NSObject

@property (readonly, nonatomic) ATXExecutableReference *reference;
@property (readonly, nonatomic) ATXExecutableIdentifier *executable;

- (id)initWithReference:(id)a0 executable:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
