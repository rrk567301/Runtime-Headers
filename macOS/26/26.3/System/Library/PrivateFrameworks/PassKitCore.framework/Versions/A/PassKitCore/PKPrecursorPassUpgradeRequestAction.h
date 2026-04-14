@class NSString, NSURL;

@interface PKPrecursorPassUpgradeRequestAction : NSObject

@property (retain, nonatomic) NSString *localizedActionText;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSURL *actionURL;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAction:(id)a0;

@end
