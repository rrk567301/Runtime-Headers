@class BRDSIDString, NSNumber;

@interface BRCAccountFacade : NSObject {
    NSNumber *_isInCarry;
}

@property (readonly, nonatomic) BRDSIDString *accountDSID;

- (void).cxx_destruct;
- (int)rampNumber;
- (id)initWithAccountDSID:(id)a0;
- (BOOL)isInCarry;

@end
