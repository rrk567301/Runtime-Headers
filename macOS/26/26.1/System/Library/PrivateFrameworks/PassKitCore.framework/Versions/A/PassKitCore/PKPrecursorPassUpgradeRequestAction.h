@class NSString, NSURL;

@interface PKPrecursorPassUpgradeRequestAction : NSObject

@property (retain, nonatomic) NSString *localizedActionText;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSURL *actionURL;

- (unsigned long long)hash;
- (BOOL)isEqualToAction:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
