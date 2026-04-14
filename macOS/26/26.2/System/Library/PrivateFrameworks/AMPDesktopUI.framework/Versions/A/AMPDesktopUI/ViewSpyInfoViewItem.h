@class NSObject;

@interface ViewSpyInfoViewItem : ViewSpyInfoItem

@property (weak, nonatomic) NSObject *targetObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)itemType;
- (void)updateFrom:(id)a0;

@end
