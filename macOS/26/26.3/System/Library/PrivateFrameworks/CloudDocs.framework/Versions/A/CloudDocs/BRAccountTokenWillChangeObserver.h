@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (id)initWithPersonaID:(id)a0;
- (void).cxx_destruct;
- (void)_accountWillChange;

@end
