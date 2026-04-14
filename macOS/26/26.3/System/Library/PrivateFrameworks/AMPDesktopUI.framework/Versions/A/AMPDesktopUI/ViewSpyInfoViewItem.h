@class NSObject;

@interface ViewSpyInfoViewItem : ViewSpyInfoItem

@property (weak, nonatomic) NSObject *targetObject;

- (long long)itemType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateFrom:(id)a0;

@end
