@class NSString, NSURL;

@interface PKPrecursorPassUpgradeRequestAction : NSObject

@property (retain, nonatomic) NSString *localizedActionText;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSURL *actionURL;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (char)isEqualToAction:(id)a0;

@end
