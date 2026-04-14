@class NSNumber, NSBundle, NSString;

@interface InputSourceOwner : NSObject <InputSourceOwnerProtocol> {
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _targetApp;
}

@property (readonly, nonatomic) struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *targetApp;
@property (readonly, nonatomic) NSNumber *targetTSMDocument;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) BOOL isSecureMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sourceWasChangedTo:(id)a0;
- (void)setNotificationOverride;
- (void)handleEnabledInputSourcesChange;
- (id)initWithTargetApp:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a0 targetTSMDocument:(id)a1;

@end
