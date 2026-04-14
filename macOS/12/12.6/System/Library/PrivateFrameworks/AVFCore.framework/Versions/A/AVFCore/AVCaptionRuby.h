@class NSString, AVCaptionRubyInternal;

@interface AVCaptionRuby : NSObject <NSCopying, NSSecureCoding> {
    AVCaptionRubyInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) long long alignment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (const struct OpaqueFigCaptionData { } *)copyFigCaptionData;
- (id)initWithFigCaptionData:(const struct OpaqueFigCaptionData { } *)a0;
- (id)initWithText:(id)a0 position:(long long)a1 alignment:(long long)a2;

@end
