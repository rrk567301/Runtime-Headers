@interface DNDSHearingTestEvent : NSObject

@property (readonly, getter=isHearingTestActive) char hearingTestActive;

- (id)initWithIsHearingTestActive:(char)a0;

@end
