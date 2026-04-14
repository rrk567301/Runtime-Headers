@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (void).cxx_destruct;
- (id)initWithPersonaID:(id)a0;
- (void)_accountWillChange;

@end
