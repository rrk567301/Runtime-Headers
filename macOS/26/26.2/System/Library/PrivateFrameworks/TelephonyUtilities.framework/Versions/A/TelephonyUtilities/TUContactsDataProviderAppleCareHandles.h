@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (void)loadHandles;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (id)init;

@end
