@class EKUIKeyViewButton, EKParticipant, NSArray;
@protocol EKUIProposedTimeActionHandler;

@interface EKUIProposedTimeResponseView : NSView {
    NSArray *_previousConstraints;
}

@property (retain) EKParticipant *proposingAttendee;
@property (weak) id<EKUIProposedTimeActionHandler> actionHandler;
@property unsigned long long orderIndex;
@property (readonly) EKUIKeyViewButton *declineControl;
@property (readonly) EKUIKeyViewButton *acceptControl;

- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)shouldDisplay;
- (void)declineControlClicked:(id)a0;
- (void)acceptControlClicked:(id)a0;

@end
