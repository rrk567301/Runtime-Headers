@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (void)loadHandles;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
