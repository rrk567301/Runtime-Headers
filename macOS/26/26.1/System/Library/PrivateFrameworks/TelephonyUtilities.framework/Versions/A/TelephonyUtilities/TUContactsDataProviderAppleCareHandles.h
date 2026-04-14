@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (void)loadHandles;
- (id)init;

@end
