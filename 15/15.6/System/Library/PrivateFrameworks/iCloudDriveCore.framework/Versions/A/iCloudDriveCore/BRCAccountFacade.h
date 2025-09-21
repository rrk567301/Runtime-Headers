@class BRDSIDString, NSNumber;

@interface BRCAccountFacade : NSObject {
    NSNumber *_isInCarry;
}

@property (readonly, nonatomic) BRDSIDString *accountDSID;

- (void).cxx_destruct;
- (id)initWithAccountDSID:(id)a0;
- (char)isInCarry;
- (int)rampNumber;

@end
