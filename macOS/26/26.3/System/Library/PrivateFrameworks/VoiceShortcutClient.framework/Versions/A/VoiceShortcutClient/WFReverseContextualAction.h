@class NSData, WFContextualAction;

@interface WFReverseContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSData *reversalState;
@property (readonly, nonatomic) WFContextualAction *actionToReverse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithActionToReverse:(id)a0 reversalState:(id)a1;

@end
