@class NSString, NSMutableArray;

@interface PXAlertConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)addActionWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;
- (void)addActionsForRadarConfiguration:(id)a0 radarAction:(id /* block */)a1 dismissAction:(id /* block */)a2;
- (void)configureForError:(id)a0;

@end
