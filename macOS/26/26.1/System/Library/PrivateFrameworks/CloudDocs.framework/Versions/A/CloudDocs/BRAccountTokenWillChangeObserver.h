@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (void)_accountWillChange;
- (id)initWithPersonaID:(id)a0;
- (void).cxx_destruct;

@end
