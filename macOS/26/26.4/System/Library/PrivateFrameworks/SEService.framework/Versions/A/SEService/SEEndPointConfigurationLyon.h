@class NSString;

@interface SEEndPointConfigurationLyon : SEEndPointConfiguration

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) unsigned short auth1SignallingBitmap;
@property (nonatomic) BOOL openSesameEnabled;
@property (nonatomic) BOOL nfcExpressOnlyInLPM;
@property (nonatomic) BOOL terminationNotPersisted;
@property (nonatomic) BOOL openSesameOverWired;
@property (nonatomic, readonly) NSString *description;

- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithRole:(long long)a0;
- (id)initWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1;
- (id)initWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1 optA:(unsigned char)a2;

@end
