@class NSString, NSDate;

@interface RTTUtterance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contactPath;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *lastChangeDate;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isTranscription;
@property (copy, nonatomic) NSString *translatedText;
@property (nonatomic) BOOL ignoreTimeoutTemporarily;

+ (BOOL)contactPathIsMe:(id)a0;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1 isTranscription:(BOOL)a2;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1 translatedText:(id)a2 isTranscription:(BOOL)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasTimedOut;
- (BOOL)isComplete;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateText:(id)a0;
- (BOOL)hasTranslation;
- (void)resetTimeout;
- (void)updateTranslation:(id)a0;

@end
