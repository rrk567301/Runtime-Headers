@class NSString, NSArray;

@interface PKPrecursorPassUpgradeRequestDescription : NSObject

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSArray *actions;

- (unsigned long long)hash;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)isEqualToDescription:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
