@class NSString, NSArray, MPRemoteCommandHandlerDialog;

@interface MPCPlayerCommandDialog : NSObject {
    MPRemoteCommandHandlerDialog *_dialog;
}

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMPDialog:(id)a0 request:(id)a1;

@end
