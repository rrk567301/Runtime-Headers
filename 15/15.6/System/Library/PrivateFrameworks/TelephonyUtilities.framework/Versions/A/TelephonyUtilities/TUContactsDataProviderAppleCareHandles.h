@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (id)init;
- (void).cxx_destruct;
- (char)contains:(id)a0;
- (void)loadHandles;

@end
