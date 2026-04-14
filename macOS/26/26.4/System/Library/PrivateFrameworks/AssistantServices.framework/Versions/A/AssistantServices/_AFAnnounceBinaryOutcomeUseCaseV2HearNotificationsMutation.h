@class NSString, AFAnnounceBinaryOutcomeUseCaseV2HearNotifications;

@interface _AFAnnounceBinaryOutcomeUseCaseV2HearNotificationsMutation : NSObject <AFAnnounceBinaryOutcomeUseCaseV2HearNotificationsMutating> {
    AFAnnounceBinaryOutcomeUseCaseV2HearNotifications *_base;
    unsigned long long _count;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCount : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setCount:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getCount;

@end
