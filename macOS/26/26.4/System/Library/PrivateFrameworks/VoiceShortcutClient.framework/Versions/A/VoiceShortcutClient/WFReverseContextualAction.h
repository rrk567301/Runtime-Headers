@class NSData, WFContextualAction;

@interface WFReverseContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSData *reversalState;
@property (readonly, nonatomic) WFContextualAction *actionToReverse;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithActionToReverse:(id)a0 reversalState:(id)a1;

@end
