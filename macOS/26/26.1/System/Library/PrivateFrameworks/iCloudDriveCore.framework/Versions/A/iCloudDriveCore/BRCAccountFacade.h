@class BRDSIDString, NSNumber;

@interface BRCAccountFacade : NSObject {
    NSNumber *_isInCarry;
}

@property (readonly, nonatomic) BRDSIDString *accountDSID;

- (int)rampNumber;
- (void).cxx_destruct;
- (id)initWithAccountDSID:(id)a0;
- (BOOL)isInCarry;

@end
