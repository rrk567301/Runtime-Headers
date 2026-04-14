@class NSString, NSDate;

@interface SmartReplies.SRSmartRepliesMessage : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ title;
    void /* function */ senderIdentifier;
    void /* function */ summary;
    void /* unknown type, empty encoding */ dateSent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) BOOL isTapBack;
@property (nonatomic) BOOL isEmote;
@property (nonatomic) BOOL isRead;
@property (nonatomic, copy) NSDate *dateSent;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
