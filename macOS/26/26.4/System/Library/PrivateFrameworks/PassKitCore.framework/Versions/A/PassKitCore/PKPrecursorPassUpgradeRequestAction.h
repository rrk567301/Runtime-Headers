@class NSString, NSURL;

@interface PKPrecursorPassUpgradeRequestAction : NSObject

@property (retain, nonatomic) NSString *localizedActionText;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSURL *actionURL;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAction:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
