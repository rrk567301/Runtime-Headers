@class HGConfigurationInternal;

@interface HGManagerInternal : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ impatientStart;
    void /* unknown type, empty encoding */ status;
}

@property (nonatomic, retain) HGConfigurationInternal *configuration;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 config:(id)a1;
- (void)muteAudioFeedbackWithSetting:(BOOL)a0;
- (void)stopWith:(id /* block */)a0;

@end
