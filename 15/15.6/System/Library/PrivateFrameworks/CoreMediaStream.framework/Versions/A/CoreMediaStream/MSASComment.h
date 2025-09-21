@class NSString, NSDate;

@interface MSASComment : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (nonatomic) int ID;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *clientTimestamp;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) char isDeletable;
@property (nonatomic) char isMine;
@property (nonatomic) char isLike;
@property (nonatomic) char isCaption;
@property (nonatomic) char isBatchComment;
@property (retain, nonatomic) NSString *content;

+ (id)comment;
+ (id)MSASPCommentFromProtocolDictionary:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
