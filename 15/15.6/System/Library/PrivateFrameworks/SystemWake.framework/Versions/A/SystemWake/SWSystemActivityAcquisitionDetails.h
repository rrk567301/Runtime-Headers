@class NSString;

@interface SWSystemActivityAcquisitionDetails : NSObject <SWSystemActivityAcquisitionDetails>

@property (readonly, nonatomic) char afterPendingSleepWasAlreadyInitiated;
@property (readonly, nonatomic) char afterFailingToRevertPendingSleep;
@property (readonly, nonatomic) char afterSleepOfNonZeroDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAfterPendingSleepWasAlreadyInitiated:(char)a0 afterFailingToRevertPendingSleep:(char)a1 afterSleepOfNonZeroDuration:(char)a2;

@end
