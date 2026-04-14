@class NSString, NSArray;

@interface PKPrecursorPassUpgradeRequestDescription : NSObject

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSArray *actions;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToDescription:(id)a0;

@end
