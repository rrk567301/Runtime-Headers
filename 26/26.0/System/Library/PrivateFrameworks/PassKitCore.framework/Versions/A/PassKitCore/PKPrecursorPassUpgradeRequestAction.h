@class NSString, NSURL;

@interface PKPrecursorPassUpgradeRequestAction : NSObject

@property (retain, nonatomic) NSString *localizedActionText;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSURL *actionURL;

- (id)_init;
- (BOOL)isEqualToAction:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
