@class NSString, NSDate;

@interface _MPCQCBMSPPendingAction : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)description;

@end
