@class NSString, SGIPPerson, NSArray, NSDate;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) SGIPPerson *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSDate *dateSent;
@property (nonatomic) char isSent;
@property (nonatomic) char isGroupConversation;
@property (nonatomic) char isSenderSignificant;
@property (retain, nonatomic) NSArray *messageUnits;
@property (retain, nonatomic) NSString *type;

+ (id)messageWithIPMessage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToMessage:(id)a0;

@end
