@class NSString, AVInputContextInternal, AVInputDevice;

@interface AVInputContext : NSObject <NSSecureCoding> {
    AVInputContextInternal *_inputContext;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSString *inputContextType;
@property (readonly, nonatomic) AVInputDevice *inputDevice;
@property (nonatomic) int applicationProcessID;

+ (void)initialize;
+ (Class)defaultInputContextImplClass;
+ (id)inputContextForID:(id)a0;
+ (id)sharedSystemAudioInputContext;

- (id)deviceName;
- (id)ID;
- (id)impl;
- (unsigned long long)hash;
- (BOOL)getApplicationProcessID:(int *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (float)inputGain;
- (BOOL)setInputGain:(float)a0 error:(id *)a1;
- (BOOL)canSetInputGain;
- (BOOL)clearUserPreferredInputDevice:(id)a0 error:(id *)a1;
- (id)initWithInputContextImpl:(id)a0;
- (void)inputContextImpl:(id)a0 didChangeInputDeviceWithInitiator:(id)a1;
- (void)inputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)inputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)inputContextImplDidChangeCanSetInputGain:(id)a0;
- (void)inputContextImplDidChangeInputGain:(id)a0;
- (void)setInputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)userPreferredInputDevice:(id)a0;

@end
