@class NSNumber, NSString, NSArray;

@interface DIAttributeImageCaptureRequirements : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _selection;
    unsigned long long _minHeight;
    unsigned long long _minWidth;
    unsigned long long _preferredHeight;
    unsigned long long _preferredWidth;
    unsigned long long _ratioHeight;
    unsigned long long _ratioWidth;
    unsigned long long _minBorderPadding;
    NSArray *_supportedEncoding;
    NSString *_userMessage;
    BOOL _liveliness;
    unsigned long long _timeout;
    unsigned long long _maxRetakeCount;
    NSNumber *_compressionRatio;
    NSNumber *_maximumCompressionRatio;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long selection;
@property (nonatomic) unsigned long long minHeight;
@property (nonatomic) unsigned long long minWidth;
@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) unsigned long long preferredWidth;
@property (nonatomic) unsigned long long ratioHeight;
@property (nonatomic) unsigned long long ratioWidth;
@property (nonatomic) unsigned long long minBorderPadding;
@property (retain, nonatomic) NSNumber *compressionRatio;
@property (retain, nonatomic) NSNumber *maximumCompressionRatio;
@property (copy, nonatomic) NSString *userMessage;
@property (copy, nonatomic) NSArray *supportedEncoding;
@property (nonatomic) BOOL liveliness;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) unsigned long long maxRetakeCount;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageCaptureRequirements:(id)a0;

@end
