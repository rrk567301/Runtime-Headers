@class NSObject;

@interface ViewSpyInfoViewItem : ViewSpyInfoItem

@property (weak, nonatomic) NSObject *targetObject;

- (void)encodeWithCoder:(id)a0;
- (long long)itemType;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateFrom:(id)a0;

@end
