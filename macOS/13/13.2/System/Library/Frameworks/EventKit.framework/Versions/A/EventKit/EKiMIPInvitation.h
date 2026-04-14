@class NSSet;

@interface EKiMIPInvitation : EKiMIPUpdate {
    NSSet *_attendees;
}

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (void).cxx_destruct;
- (id)attendees;
- (id)emailSubject;
- (id)emailBody;
- (id)initWithEvent:(id)a0 withDiff:(id)a1;

@end
