@class NSData, WFContextualAction;

@interface WFReverseContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSData *reversalState;
@property (readonly, nonatomic) WFContextualAction *actionToReverse;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithActionToReverse:(id)a0 reversalState:(id)a1;

@end
