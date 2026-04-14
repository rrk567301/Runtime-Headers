@class NSString, NSDate;

@interface TTYUtterance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contactPath;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSDate *lastChangeDate;
@property (nonatomic) BOOL isMe;

+ (BOOL)contactPathIsMe:(id)a0;
+ (id)utteranceWithContactPath:(id)a0 andText:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isComplete;
- (BOOL)hasTimedOut;
- (void)updateText:(id)a0;
- (void)resetTimeout;

@end
