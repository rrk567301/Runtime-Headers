@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int swapId;
@property (readonly, nonatomic) unsigned int frameSeed;

@end
