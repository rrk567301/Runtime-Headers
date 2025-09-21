@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *text;
@property double offset;

+ (id)lyricLineWithText:(id)a0 offset:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLineWithText:(id)a0 offset:(double)a1;

@end
