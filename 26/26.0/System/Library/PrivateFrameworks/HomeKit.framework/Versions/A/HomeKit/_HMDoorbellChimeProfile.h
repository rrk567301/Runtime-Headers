@class NSString;
@protocol _HMDoorbellChimeProfileDelegate;

@interface _HMDoorbellChimeProfile : _HMAccessoryProfile <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<_HMDoorbellChimeProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleDoorbellChimeMessage:(id)a0;
- (void)_registerNotificationHandlers;

@end
