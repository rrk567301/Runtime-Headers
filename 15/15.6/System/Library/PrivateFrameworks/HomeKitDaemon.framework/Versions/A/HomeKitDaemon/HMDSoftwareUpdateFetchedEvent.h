@interface HMDSoftwareUpdateFetchedEvent : HMMLogEvent

@property (nonatomic, getter=wasUserInitiated) char userInitiated;
@property (nonatomic, getter=wasNewUpdateFetched) char newUpdateFetched;

+ (id)eventWasUserInitiated:(char)a0 wasNewUpdateFetched:(char)a1;

@end
