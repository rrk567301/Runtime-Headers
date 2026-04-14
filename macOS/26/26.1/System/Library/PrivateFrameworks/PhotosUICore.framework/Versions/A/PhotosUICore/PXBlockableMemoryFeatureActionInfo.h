@class NSString;

@interface PXBlockableMemoryFeatureActionInfo : NSObject

@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithActionType:(id)a0 localizedTitle:(id)a1;

@end
