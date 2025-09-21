@class NSString, NSDate;

@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *contactPath;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *lastChangeDate;
@property (nonatomic) char isMe;
@property (nonatomic) char isTranscription;
@property (nonatomic) char ignoreTimeoutTemporarily;

+ (char)contactPathIsMe:(id)a0;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1 isTranscription:(char)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isComplete;
- (char)hasTimedOut;
- (void)updateText:(id)a0;
- (void)resetTimeout;

@end
